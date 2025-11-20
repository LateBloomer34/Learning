// id selector
//1-  document.getElementById
//2-  document.querySelector("#")
let firstLine = document.querySelector("#first");
firstLine.innerHTML = "hello i am first line";
// document.querySelectorAll return the collection of element, if we need to access it , we give the index with it.

// classSelector
// document.getElementsByClassName
// document.querySelector(".")

let secondLine = document.querySelector(".firstClass");
secondLine.innerHTML = "hello i am class selector";

// access element using tag - 
// it will return a collection of multiple tags
let tag = document.getElementsByTagName("div");
tag[0].style.backgroundColor = "pink";


let tag1 = document.querySelector("div");
tag1.style.fontSize = "30px"