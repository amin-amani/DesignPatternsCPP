import QtQuick 2.0
import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
Rectangle
{
    id: imageComponent
    property bool flipped:false
    property  string frontImage: ""
    property  string backImage: ""
     property  string pattern: ""
//    anchors.fill: parent
    Text {

        z:2
        id: name
        font.pointSize: 20
        text: (imageComponent.flipped)?pattern:" "
    }
        Flipable
        {
            id:flipable
            anchors.fill: parent
            front: Image {
                source: frontImage;
                anchors.centerIn: parent ;
                height: parent.height;
                width: parent.width
            }
            back: Image {
                source: backImage;
                anchors.centerIn: parent;
                height: parent.height;
                width: parent.width
            }
            transform: Rotation {
                id: rotation
                origin.x: width/2
                origin.y: height/2
                axis.x: 0; axis.y: 1; axis.z: 0
                angle: 0
            }
            states: [
                State {
                    name: "front"
                    when: !imageComponent.flipped
                },
                State {
                    name: "back"
                    when: imageComponent.flipped
                    PropertyChanges { target: rotation; angle: 180 }
                }
            ]
            transitions: Transition {
                NumberAnimation { target: rotation; property: "angle"; duration: 200 }
            }

            MouseArea {
                anchors.fill: parent
                onClicked: imageComponent.flipped = !imageComponent.flipped
            }

        }

}

