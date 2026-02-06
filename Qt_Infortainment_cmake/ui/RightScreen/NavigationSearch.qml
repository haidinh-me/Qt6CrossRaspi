import QtQuick 2.15

Rectangle{
    color: "#dedede"
    radius: 5
    width: parent.width * 1/3
    height: parent.height * 1/12

    Image{
        id: searchIcon
        height: parent.height * .4
        anchors{
            left: parent.left
            leftMargin: 20
            verticalCenter: parent.verticalCenter
        }
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assets/search.png"
    }

    Text {
        id: navPlaceHolderText
        text: qsTr("Navigate")
        font.pixelSize: parent.width * .08
        color: "#5D5D5D"
        visible: navTextInput.text ===""
        anchors{
            left: searchIcon.right
            leftMargin: parent.width * .07
            verticalCenter: parent.verticalCenter
        }
    }

    TextInput{
        id:navTextInput
        clip: true
        anchors{
            top: parent.top
            left: searchIcon.right
            leftMargin: 20
            bottom: parent.bottom
            right: parent.right
            rightMargin: 5
        }
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 15
    }
}
