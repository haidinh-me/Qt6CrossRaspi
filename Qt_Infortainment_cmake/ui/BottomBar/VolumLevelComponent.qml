import QtQuick 2.15

Item {
    property string fontColor: "#5D5D5D"
    Rectangle{
        id:incrementButtom
        anchors{
            right: volumIcon.left
            rightMargin: parent.width * .4
            top: parent.top
            bottom: parent.bottom
        }
        width: parent.height/2
        color: "black"

        Text{
            id: incre
            text: "<"
            anchors{
                centerIn: parent
            }
            color: fontColor
            font.bold: true
            font.pixelSize: parent.width * .6
        }
        MouseArea{
            anchors.fill: parent
            onClicked: volumLevelHandler.changedVolumLevel( -1 )
            onPressed: loopIncre.start()
            onReleased: loopIncre.stop()
            onCanceled: loopIncre.stop()
        }
    }

    Image{
        id: volumIcon
        source: {
            if(volumLevelHandler.volumLevel <=1)
                "qrc:/ui/assets/volume-mute.png"
            else if(volumLevelHandler.volumLevel >=2 && volumLevelHandler.volumLevel <34)
                "qrc:/ui/assets/volume1.png"
            else if(volumLevelHandler.volumLevel >= 34 && volumLevelHandler.volumLevel < 68)
                "qrc:/ui/assets/volume2.png"
            else "qrc:/ui/assets/volume3.png"
        }

        height: parent.height * .6
        fillMode: Image.PreserveAspectFit
        anchors{
            right: decrementButtom.left
            rightMargin: parent.width * .4
            verticalCenter: parent.verticalCenter
        }
    }

    Rectangle{
        id:decrementButtom
        anchors{
            right: parent.right
            rightMargin: parent.width * .4
            top: parent.top
            bottom: parent.bottom
        }
        width: parent.height/2
        color: "black"

        Text{
            id: decre
            text: ">"
            anchors{
                centerIn: parent
            }
            color: fontColor
            font.bold: true
            font.pixelSize: parent.width * .6
        }
        MouseArea{
            anchors.fill: parent
            onClicked: volumLevelHandler.changedVolumLevel( 1 )
            onPressed: loopDecre.start()
            onReleased: loopDecre.stop()
            onCanceled: loopDecre.stop()
        }
    }

    Timer{
        id: loopDecre
        interval: 100
        repeat: true
        onTriggered: volumLevelHandler.changedVolumLevel( 1 )
    }
    Timer{
        id: loopIncre
        interval: 100
        repeat: true
        onTriggered: volumLevelHandler.changedVolumLevel( -1 )
    }

    Connections{
        target: volumLevelHandler
        function onVolumLevelChanged(){
            canControllerHandler.sentAudio(volumLevelHandler.volumLevel)
            visibleText.stop()
            volumIcon.visible = false
            visibleText.start()
        }
    }

    Timer{
        id: visibleText
        interval: 1000
        repeat: false
        onTriggered: {
            volumIcon.visible = true
        }
    }

    Text{
        id: volumLevelLabel
        color: fontColor
        font.pixelSize: 25
        visible: !volumIcon.visible
        text: volumLevelHandler.volumLevel
        anchors{
           centerIn: volumIcon
        }
    }

}
