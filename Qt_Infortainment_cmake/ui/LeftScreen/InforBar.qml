import QtQuick 2.15

Rectangle{
    id: inforBar
    visible: true
    height: parent.height/7

    // off: #898383     on: #3BFF00
    radius: 10

    color: "black"

    Image{
        id:turnLeft
        source:( inforBarHandler.leftSignal ? "qrc:/ui/assets/turn-left_on.png"
                                            : "qrc:/ui/assets/turn-left_off.png")

        anchors{
            left: parent.left
            leftMargin: 10
            top: parent.top
            topMargin: 3
        }
        height: parent.height / 1.75
        fillMode: Image.PreserveAspectFit
    }

    Image{
        id:turnRight
        source:( inforBarHandler.rightSignal ? "qrc:/ui/assets/turn-right_on.png"
                                             : "qrc:/ui/assets/turn-right_off.png")

        anchors{
            right: parent.right
            rightMargin: 10
            top: parent.top
            topMargin: 3
        }
        height: parent.height / 1.75
        fillMode: Image.PreserveAspectFit
    }

    Image{
        id: lightSm
        anchors{
            top: hazardLight.top
            bottom: hazardLight.bottom
            left: hazardLight.right
            leftMargin: 10
        }
        height: parent.height / 2.5
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.lightSm ? "qrc:/ui/assets/car-light-sm_on.png"
                                          : "qrc:/ui/assets/car-light-sm_off.png")
    }

    Image{
        id: lightPaking
        anchors{
            top: hazardLight.top
            bottom: hazardLight.bottom
            left: lightSm.right
            leftMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.paking ? "qrc:/ui/assets/car-paking_on.png"
                                         : "qrc:/ui/assets/car-paking_off.png")
    }

    Image{
        id: hazardLight
        anchors{
            horizontalCenter: parent.horizontalCenter
            top: parent.top
            topMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.hazard ? "qrc:/ui/assets/car-hazard_on.png"
                                         : "qrc:/ui/assets/car-hazard_off.png")
    }

    Image{
        id: lightCos
        anchors{
            top: hazardLight.top
            bottom: hazardLight.bottom
            right: hazardLight.left
            rightMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.lightCos ? "qrc:/ui/assets/car-light-cos_on.png"
                                           : "qrc:/ui/assets/car-light-cos_off.png")
    }

    Image{
        id: lightPhare
        anchors{
            top: hazardLight.top
            bottom: hazardLight.bottom
            right: lightCos.left
            rightMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.lightPhare ? "qrc:/ui/assets/car-light-phare_on.png"
                                             : "qrc:/ui/assets/car-light-phare_off.png")
    }

    Image{
        id:checkEngine
        x: parent.width * 0.5 - width*1.25
        anchors{
            bottom: parent.bottom
            bottomMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.indicator ? "qrc:/ui/assets/car-indicator_on.png"
                                            : "qrc:/ui/assets/car-indicator_off.png")
    }

    Image{
        id:temperature
        x: parent.width * 0.5 + width/2
        anchors{
            bottom: parent.bottom
            bottomMargin: 10
        }
        height: parent.height / 3
        fillMode: Image.PreserveAspectFit
        source: ( inforBarHandler.temperature ? "qrc:/ui/assets/car-temperature_on.png"
                 :"qrc:/ui/assets/car-temperature_off.png")
    }
}
