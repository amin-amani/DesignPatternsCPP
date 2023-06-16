import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Window 2.2
import QtGraphicalEffects 1.0
import QtMultimedia 5.9
//import Trans 2.0
import QtQuick 2.12
import QtQuick.Controls 2.5


Rectangle {

    id: main_panel_rectangle
    visible: true
    width: Screen.width //1280
    height: Screen.height //1024
    color: "#fff"
    property variant stringList: [
        "strategy",
        "template",
        "factory",
        "visitor",
        "iterator",
        "abstractFactory",
        "proxy",
        "singleton",
        "command",
        "observer",
        "chain",
        "mediator",
        "bridge",
        "builder",
        "memento",
        "prototype",
        "composite",
        "facade",
        "decorator",
        "objectAdapter",
        "classAdapter",
        "flyweight",
        "interpreter",
        "state"
    ]
     function qmlfunc(id)
    {
//        stringList.push(id)
//         console.log(stringList)

    }
     Rectangle{
         anchors.centerIn: parent
         width: parent.width*0.7
         height: parent.height*0.7
         clip: true

         SwipeView {
             id: swipeView
             anchors.fill: parent
             Repeater {
                 id:repeater
                 model: stringList
                  ImageBox {
                      frontImage: "images/NoText/"+modelData+".PNG"
                      backImage: "images/CompleteDiagrams/"+modelData+".PNG"
                      pattern:qsTr(modelData)

                  }
     //             onModelChanged: {
     //                 for (var i = 0; i < stringList.length; i++) {
     //                     itemAt(i).frontImage = "images/NoText/" + modelData + ".PNG";
     //                     itemAt(i).backImage = "images/CompleteDiagrams/" + modelData + ".PNG";
     //                 }
     //             }
             }
         }
         //sw

     }


}

