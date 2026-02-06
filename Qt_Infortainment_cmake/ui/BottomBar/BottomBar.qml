import QtQuick 2.15

Rectangle{
    id: bottomBar
    anchors{
        left: parent.left
        right: parent.right
        bottom: parent.bottom
    }
    height: parent.height / 13
    color: "black"

    visible: true

    Image{
        id: carIconSetting
        height: parent.height * .85
        fillMode: Image.PreserveAspectFit
        anchors{
            left: parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }
        source: "qrc:/ui/assets/car-icon-setting.png"
        MouseArea{
            anchors.fill: parent
            anchors.margins: 10
            onClicked: systemHandler.setCarIconSettingStatus(!systemHandler.carIconSettingStatus)
        }

    }
    HVACComponent{
        id:driverHVACDisplay
        anchors{
            top: parent.top
            bottom: parent.bottom
            left: carIconSetting.right
            leftMargin: parent.height
        }
        typeClass: driverHVACHandler
    }
    HVACComponent{
        id:passengerHVACDisplay
        anchors{
            top: parent.top
            bottom: parent.bottom
            right: parent.right
            rightMargin: parent.width/3
        }
        typeClass: passengerHVACHandler
    }
    VolumLevelComponent{
        id: volumLevel
        anchors{
            top: parent.top
            bottom: parent.bottom
            right: parent.right
            rightMargin: parent.width/30
        }
    }
}
