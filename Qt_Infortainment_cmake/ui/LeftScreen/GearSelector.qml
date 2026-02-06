import QtQuick 2.15

Rectangle {
    id: mainRec
    width: parent.width * 5/8
    height: parent.height * 1/3
    color: "transparent"

    property int gearInput: 0
                               ( gearInput === 0 ?  inforBarHandler.setPaking( true )
                                                   : inforBarHandler.setPaking( false ))

    onGearInputChanged: {
        gearWheel.currentIndex = gearInput
    }

    ListModel {
        id: gearModel
        ListElement { gear: "P" }
        ListElement { gear: "R" }
        ListElement { gear: "N" }
        ListElement { gear: "D" }
    }

    PathView {
        id: gearWheel
        anchors.fill: parent
        model: gearModel
        snapMode: PathView.SnapOneItem
        preferredHighlightBegin: 0.5   // giữa
        preferredHighlightEnd: 0.5
        focus: true
        pathItemCount: 5   // số phần tử hiển thị cùng lúc

        path: Path {
            startX: 50; startY: height/2
            PathQuad { x: width-50; y: height/2; controlX: width/2; controlY: height/2 - 80 }
        }

        delegate: Text {
            text: gear
            font.pixelSize: parent.width * 8/75
            color: PathView.isCurrentItem ? "black" : "gray"
            opacity: PathView.isCurrentItem ? 1.0 : 0.4
            scale: PathView.isCurrentItem ? 1.5 : 1.05

            Behavior on opacity { NumberAnimation { duration: 250 } }
            Behavior on scale { NumberAnimation { duration: 250 } }
            Behavior on color { ColorAnimation { duration: 250 } }

            anchors.verticalCenter: parent.verticalCenter
        }

        highlight: Rectangle {
            width: mainRec.width * 16/75
            height: mainRec.width * 16/75
            radius:  mainRec.width * 3/25
            color: "transparent"
            border.color: "blue"
            border.width: 2
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }

        onCurrentIndexChanged:{
            gearWheel.currentIndex = gearInput
        }

        Component.onCompleted: {
            gearWheel.currentIndex = gearInput
        }
    }
}
