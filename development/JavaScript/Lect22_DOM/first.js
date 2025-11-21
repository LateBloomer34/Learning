   let rootDesti = document.getElementById
("root");
    let rootEle = document.createElement("ul");
    rootDesti.appendChild(rootEle);
    rootEle.className = "listRoot";
    rootEle.id = "listRoot1";

function addEle(con1, con2){
        let desti1 = document.getElementById("listRoot1");

        let Ele1 = document.createElement("li");
        Ele1.innerHTML = con1;

        let Ele2 = document.createElement("li");
        Ele2.innerHTML = con2;

        desti1.append(Ele1, Ele2);
}

addEle("first", "second");
addEle("third", "fourth");


// create a textNode

let ele3 = document.createTextNode("hello learners");
let desti2 = document.getElementsByClassName("listRoot")[0];

desti2.append(ele3);

// create a attribute node


let ele4 = document.createAttribute("class");
ele4.value = "text";
let dest = document.querySelector("li");
dest.setAttributeNode(ele4);

dest.id = "firstlistClass"

// access second element of list 

let des = document.querySelectorAll("li")[1];
des.innerHTML= "updated";

// access children from parent;


let destm= document.getElementsByTagName("ul")[0];
destm.childNodes[1].innerHTML = "hehe"

let destm1 = document.getElementsByTagName("li")[0];
console.log(destm1.getAttribute("class"));
destm1.setAttribute("class" ,"text1")
destm1.setAttribute("id" ,"firstListID")
destm1.className = "name1";
destm1.removeAttribute("class");


// add element in the top

let destination1 = document.getElementById("listRoot1");
let a = document.createElement("li");
a.innerHTML = "programming";
destination1.prepend(a)

a.id = "firstID"

a.style.color = "red";


// add element in a particular position

let des2 = document.getElementsByTagName("ul")[0];
let e1 = document.createElement("ul");
e1.innerText = "mid subject";
let childre = des2.children[2]
des2.insertBefore(e1, childre);


// other way to add element in the suing JS - using assign operator
 let target = document.getElementById("listRoot1");
 target.innerHTML += "<li> hello first";
