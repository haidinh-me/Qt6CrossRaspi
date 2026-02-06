import QtQuick 2.15
import QtQuick.Controls
import QtLocation 5.12
import QtPositioning 5.12

Rectangle{
    id: rightScreen

    anchors{
        right: parent.right
        bottom: bottomBar.top
        top: parent.top
    }
    width: parent.width *2/3
    color: "white"

    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        //visible: systemHandler.carIconSettingStatus
        center: QtPositioning.coordinate(10.8635, 106.6175) // Oslo
        zoomLevel: 14
        property geoCoordinate startCentroid

        PinchHandler {
            id: pinch
            target: null
            onActiveChanged: if (active) {
                map.startCentroid = map.toCoordinate(pinch.centroid.position, false)
            }
            onScaleChanged: (delta) => {
                map.zoomLevel += Math.log2(delta)
                map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
            }
            onRotationChanged: (delta) => {
                map.bearing -= delta
                map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
            }
            grabPermissions: PointerHandler.TakeOverForbidden
        }
        WheelHandler {
            id: wheel
            // workaround for QTBUG-87646 / QTBUG-112394 / QTBUG-112432:
            // Magic Mouse pretends to be a trackpad but doesn't work with PinchHandler
            // and we don't yet distinguish mice and trackpads on Wayland either
            acceptedDevices: Qt.platform.pluginName === "cocoa" || Qt.platform.pluginName === "wayland"
                             ? PointerDevice.Mouse | PointerDevice.TouchPad
                             : PointerDevice.Mouse
            rotationScale: 1/120
            property: "zoomLevel"
        }
        DragHandler {
            id: drag
            target: null
            onTranslationChanged: (delta) => map.pan(-delta.x, -delta.y)
        }
        Shortcut {
            enabled: map.zoomLevel < map.maximumZoomLevel
            sequence: StandardKey.ZoomIn
            onActivated: map.zoomLevel = Math.round(map.zoomLevel + 1)
        }
        Shortcut {
            enabled: map.zoomLevel > map.minimumZoomLevel
            sequence: StandardKey.ZoomOut
            onActivated: map.zoomLevel = Math.round(map.zoomLevel - 1)
        }
    }

    Image{
        id: lock_unlock_icon

        anchors{
            top: parent.top
            left: parent.left
            margins: 20
        }

        width: parent.width / 30
        fillMode: Image.PreserveAspectFit
        source: (systemHandler.carLocked ? "qrc:/ui/assets/lock.png" : "qrc:/ui/assets/unlock.png")

        MouseArea{
            anchors.fill: parent
            onClicked: systemHandler.setCarLocked(!systemHandler.carLocked)
        }
    }

    Text{
        id:currentTimeDisplay
        anchors{
            left: lock_unlock_icon.right
            leftMargin: rightScreen.width/17
            bottom: lock_unlock_icon.bottom
        }
        text: systemHandler.currentTime
        font.bold: true
        font.pixelSize: rightScreen.width/44
        color: "black"
    }

    Text{
        id: tempDislay
        anchors{
            left: currentTimeDisplay.right
            leftMargin: rightScreen.width/17
            bottom: currentTimeDisplay.bottom
        }
        text: systemHandler.outdoorTemp + "°C"
        font.bold: true
        font.pixelSize: rightScreen.width/44
        color: "black"
    }

    Image{
        id:userIcon
        anchors{
            left: tempDislay.right
            leftMargin: rightScreen.width/17
            bottom: tempDislay.bottom
        }
        width: parent.width / 30
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assets/user.png"
    }

    Text{
        id: userNameDisplay
        anchors{
            left: userIcon.right
            leftMargin: rightScreen.width/132
            bottom: userIcon.bottom
        }
        text: systemHandler.userName
        font.bold: true
        font.pixelSize: rightScreen.width/44
        color: "black"
    }

    NavigationSearch{
        id:nvSearch
        //visible: systemHandler.carIconSettingStatus
        anchors{
            left: lock_unlock_icon.left
            top: lock_unlock_icon.bottom
            topMargin: rightScreen.width/33
        }
    }
}
