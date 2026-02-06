import QtQuick 2.15

Item {
    property string fontColor: "#5D5D5D"
    required property var typeClass
    Rectangle{
        id:incrementButtom
        anchors{
            left: parent.left
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
            onClicked: typeClass.changedTemperature( -1 )
            onPressed: loopIncre.start()
            onReleased: loopIncre.stop()
            onCanceled: loopIncre.stop()
        }
    }

    Text{
        id: temperatureDisplay
        color: fontColor
        font.pixelSize: incrementButtom.width
        text: typeClass.targetTemperature + "°C"

        onTextChanged: {
            (typeClass === driverHVACHandler ? canControllerHandler.sentTempDriver(typeClass.targetTemperature) : canControllerHandler.sentTempPassenger(typeClass.targetTemperature))
        }

        anchors{
            left: incrementButtom.right
            leftMargin: parent.width * .6
            verticalCenter: parent.verticalCenter
        }
    }

    Rectangle{
        id:decrementButtom
        anchors{
            left: temperatureDisplay.right
            leftMargin: parent.width * .4
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
            onClicked: typeClass.changedTemperature( 1 )
            onPressed: loopDecre.start()
            onReleased: loopDecre.stop()
            onCanceled: loopDecre.stop()
        }
    }

    Timer{
        id: loopDecre
        interval: 100
        repeat: true
        onTriggered: typeClass.changedTemperature( 1 )
    }
    Timer{
        id: loopIncre
        interval: 100
        repeat: true
        onTriggered: typeClass.changedTemperature( -1 )
    }

}
