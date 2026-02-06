import QtQuick 2.15

Item{
    anchors{
        top: parent.top
        left: parent.left
        bottom: bottomBar.top
        right: rightScreen.left
    }

    InforBar{
        id:inforBar
        anchors{
            top: parent.top
            left: parent.left
            right: parent.right
        }
        visible: true
    }

    Rectangle{
        id: leftScreen

        anchors{
            right: parent.right
            left: parent.left
            top: inforBar.bottom
            bottom: parent.bottom
        }
        color: "white"

        Column{
            spacing: 1
            anchors.centerIn: parent
            visible: !carBackground.visible
            Gauge{
                id:gaugeMeter
                oType: "METER"
                target: systemHandler.carspeed
            }
            Gauge{
                id:gaugeRPM
                oType: "RPM"
                target: systemHandler.rpmEngine
            }
        }

        Image{
            id: fuelLevel
            visible: !carBackground.visible
            width: parent.width / 9
            y: parent.height/2 - width/2
            anchors{
                left: parent.left
                leftMargin: 15
            }
            fillMode: Image.PreserveAspectFit
            source: "qrc:/ui/assets/fuel.png"

            Text {
                id: fuelDisplay
                font.pixelSize: parent.width * .4
                font.bold: true
                text: qsTr(systemHandler.fuellevel.toString() + "%")
                anchors{
                    horizontalCenter: parent.horizontalCenter
                    top: parent.top
                    topMargin: parent.height + 5
                }
            }
        }


        Image{
            id: coolantLevel
            visible: !carBackground.visible
            width: parent.width / 9
            y: parent.height/2 - width/2
            anchors{
                right : parent.right
                rightMargin: 15
            }
            fillMode: Image.PreserveAspectFit
            source: "qrc:/ui/assets/auto-coolant-gauge.png"

            Text {
                id: coolantDisplay
                font.pixelSize: parent.width * .4
                font.bold: true
                text: qsTr(systemHandler.coolant.toString() + "°C")
                anchors{
                    horizontalCenter: parent.horizontalCenter
                    top: parent.top
                    topMargin: parent.height + 5
                }
            }
        }

        Image{
            id:carBackground
            anchors.centerIn: parent
            visible: systemHandler.carIconSettingStatus
            width: parent.width
            fillMode: Image.PreserveAspectFit
            source: "qrc:/ui/assets/car-render.jpg"
        }

        GearSelector{
            id:gear
            anchors{
                horizontalCenter: parent.horizontalCenter
                verticalCenter: parent.verticalCenter
            }

            gearInput: (inforBarHandler.paking ? 0:
                            inforBarHandler.gearR ? 1:
                            inforBarHandler.gearN ? 2:
                            inforBarHandler.gearD ? 3:-1)

            visible: !carBackground.visible
        }
    }
}

