import QtQuick 2.15

Item{
    width: leftScreen.height / 2
    height: width
    property real speed: 0   // giá trị speed hiển thị
    property real maxSpeed: 240

    property real rpm: 0   // giá trị rpm hiển thị
    property real maxRpm: 10000

    property string oType
    property var startAngles: (oType == "METER" ? -Math.PI*7/6 : -Math.PI*1/6 )
    property var endAngles : (oType == "METER" ? -Math.PI*11/6 : Math.PI*7/6 )

    property real target: (oType == "METER" ? speed : rpm )   // giá trị hiển thị
    property real maxTarget: (oType == "METER" ? maxSpeed : maxRpm )

    /*Timer {
        interval: 100; running: true; repeat: true
        onTriggered: {
            target = (target+(oType == "METER" ? 2 : 85 )) % maxTarget
            kimGauge.requestPaint()
        }
    }*/

    Component.onCompleted: {
        bgCanvas.requestPaint()
        gaugeCanvas.requestPaint()
        kimGauge.requestPaint()
    }

    onTargetChanged: {
            kimGauge.requestPaint()
    }

    FontLoader {
            id: tahomaFont
            source: "qrc:/fonts/tahomabd.ttf"
            onStatusChanged: {
                if (status == FontLoader.Ready) {
                    bgCanvas.requestPaint();
                    gaugeCanvas.requestPaint();
                }
            }
        }

    FontLoader{
        id: arialFont
        source: "qrc:/fonts/arialbd.ttf"
        onStatusChanged: {
            if (status == FontLoader.Ready) {
                bgCanvas.requestPaint();
                gaugeCanvas.requestPaint();
            }
        }
    }

    Canvas {
        id: bgCanvas
        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()
        anchors.fill: parent

        property var startAngle: (oType == "METER" ? Math.PI*5/6 : -Math.PI*1/6 )
        property var endAngle : (oType == "METER" ? Math.PI*13/6 : Math.PI*7/6 )
        property int innerSegments: (oType == "METER" ? 12 : 10 )
        property real innerGapRatio: 0.15
        property real innerOuterOffset: 0.15
        property real innerThickness: parent.width * .095

        onPaint: {
            var ctx = getContext("2d")
            ctx.reset()

            var cx = width/2
            var cy = height/2
            var radius = width*.35

            var innerOuterR = radius * (1 - innerOuterOffset)
            var innerInnerR = innerOuterR - innerThickness

            var Astart = startAngle
            var Asweep = endAngle - startAngle
            var segmentCount = innerSegments
            var step = Asweep / segmentCount
            var gap = step * Math.max(0, Math.min(0.45, innerGapRatio))

            var ringGrad = ctx.createRadialGradient(cx, cy, innerInnerR*0.4, cx, cy, innerOuterR)
            ringGrad.addColorStop(0.0, "rgba(10,40,90,0.9)")
            ringGrad.addColorStop(0.6, "rgba(20,90,160,0.9)")
            ringGrad.addColorStop(1.0, "rgba(180,50,120,0.9)")

            for (var i=0; i<segmentCount; i++) {
                var a1 = Astart + i*step + gap*0.5
                var a2 = Astart + (i+1)*step - gap*0.5
                if (a2 <= a1) continue

                ctx.beginPath()
                ctx.moveTo(cx + Math.cos(a1)*innerInnerR, cy + Math.sin(a1)*innerInnerR)
                ctx.arc(cx, cy, innerOuterR, a1, a2, false)
                ctx.arc(cx, cy, innerInnerR, a2, a1, true)
                ctx.closePath()

                ctx.fillStyle = ringGrad
                ctx.globalAlpha = 0.95
                ctx.fill()
                ctx.globalAlpha = 1.0

                ctx.beginPath()
                ctx.arc(cx, cy, innerOuterR, a1, a2, false)
                ctx.lineWidth = 1.0
                ctx.strokeStyle = "rgba(0,0,0,0.18)"
                ctx.stroke()
            }
        }
    }

    Canvas{
        id:kimGauge
        width: parent.width
        height: parent.height

        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()

        // ---- VẼ KIM ----
        onPaint:{
        //console.log(width)
        var cct = getContext("2d")
        cct.reset()
        var centerX = width/2
        var centerY = height/2
        var radius = width*.45
        var needleAngle = startAngles + (target/maxTarget)*(Math.PI*4/3)
        cct.beginPath()
        cct.moveTo(centerX, centerY)
        cct.lineTo(centerX + Math.cos(needleAngle)*(radius-parent.width * .15),
                   centerY + Math.sin(needleAngle)*(radius-parent.width * .15))
        cct.lineWidth = parent.width * .025
        cct.strokeStyle = "red"
        cct.stroke()

        cct.fillStyle = "black"
        cct.font = `bold ${parent.width * 0.085}px ${tahomaFont.name}`;
        cct.textAlign = "center"
        cct.textBaseline = "middle"
        cct.fillText(target.toString() + (oType == "METER" ? " Km/h" : " RPM" ) ,
                     centerX, (oType == "METER" ? (centerY + parent.width /4) : (centerY - parent.width /4) ))

        // vẽ overlay
        cct.beginPath()
        cct.lineWidth = parent.width * .15

        // Gradient (màu sáng dần theo chiều kim)
        var grad = cct.createLinearGradient(0, 0, width, 0)

        if(oType == "METER"){
            grad.addColorStop(0, "#9094f5")
            grad.addColorStop(0.7,"#2227c9")
            grad.addColorStop(1, "#03064f")
        }

        else {
            grad.addColorStop(0, "#03064f")
            grad.addColorStop(0.7,"#2227c9")
            grad.addColorStop(1, "#9094f5")
        }

        cct.strokeStyle = grad
        cct.arc(centerX, centerY, radius- parent.width * .075,startAngles,startAngles + (target/maxTarget)*(Math.PI*4/3), false)
        cct.stroke()
        }

    }

    Canvas {
        id: gaugeCanvas
        width: parent.width
        height: parent.height

        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()

        onPaint: {
            var ctx = getContext("2d")
            ctx.reset()
            var centerX = width/2
            var centerY = height/2
            var radius = width*.45

            // ---- VẼ NỀN ----
            /*var grad = ctx.createLinearGradient(0, height, width, 0)
            grad.addColorStop(0, "#20782a")
            grad.addColorStop(0.5, "#0bb31e")
            grad.addColorStop(1, "#05ed1f")
            ctx.strokeStyle = "white"
            ctx.beginPath()
            ctx.arc(centerX, centerY, radius,  startAngles, endAngles, false)
            ctx.lineWidth = 5
            ctx.stroke()*/

            // ---- NÚT TRÒN Ở GIỮA ----
            ctx.beginPath()
            ctx.arc(centerX, centerY, parent.width * .06, 0, 2*Math.PI)
            ctx.fillStyle = "black"
            ctx.fill()

            // ---- VẼ VẠCH CHIA ----
            for (var i = 0; i <= maxTarget; i += (oType == "METER" ? 20 : 1000 )) {
                var angle = startAngles + (i/maxTarget)*(Math.PI*4/3)
                var x1 = centerX + Math.cos(angle)*radius
                var y1 = centerY + Math.sin(angle)*radius
                var x2 = centerX + Math.cos(angle)*(radius-parent.width * .045)
                var y2 = centerY + Math.sin(angle)*(radius-parent.width * .045)

                ctx.beginPath()
                ctx.moveTo(x1, y1)
                ctx.lineTo(x2, y2)
                ctx.lineWidth = 3
                ctx.strokeStyle = (i >= (oType == "METER" ? 200 : 8000 ) ? "red" : "black")
                ctx.stroke()

                // Vẽ số
                var tx = centerX + Math.cos(angle)*(radius-parent.width * .09)
                var ty = centerY + Math.sin(angle)*(radius-parent.width * .09)
                ctx.fillStyle = (i >= (oType == "METER" ? 200 : 8000 ) ? "red" : "black")
                ctx.font = `bold ${parent.width * 0.06}px ${tahomaFont.name}`;
                ctx.textAlign = "center"
                ctx.textBaseline = "middle"
                ctx.fillText((oType == "METER" ? i.toString() : (i/100).toString() )
                             , tx, ty)
            }
            if(oType == "RPM") {
                ctx.fillStyle = "black"
                ctx.font = `bold ${parent.width * 0.07}px ${arialFont.name}`;
                ctx.textAlign = "center"
                ctx.textBaseline = "middle"
                ctx.fillText("x100", centerX, centerY + parent.width * .15 )
            }
        }
    }
}
