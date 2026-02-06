import QtQuick
import QtQuick.Controls
import QtQuick.Window

import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"

Window {
    width: 1000
    height: 600
    visible: true
    title: qsTr("Infortainment")

    //visibility: Window.FullScreen
    //flags: Qt.FramelessWindowHint

    RightScreen{
        id: rightScreen
    }

    LeftScreen{
        id: leftScreen
    }

    BottomBar{
        id:bottomBar
    }
}
