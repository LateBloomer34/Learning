// iterate one by one

// let desti = document.getElementById("root");

// let red = document.getElementById("red");
// let blue = document.getElementById("blue");
// let ppurple = document.getElementById("ppurple");
// let purple = document.getElementById("purple");

// red.addEventListener("click", ()=>{
//     desti.style.backgroundColor = "red";
// })
// blue.addEventListener("click", ()=>{
//     desti.style.backgroundColor = "blue";
// })
// pink.addEventListener("click", ()=>{
//     desti.style.backgroundColor = "pink";
// })
// purple.addEventListener("click", ()=>{
//     desti.style.backgroundColor = "purple";
// })



// using loop to itterate in every elemet of an array

let destination = document.querySelector("#root");

// access using querySelectorAll

// let target = document.querySelectorAll("button");

// access using getElementsByTagName

let target = document.getElementsByTagName("button");

//using for of loop to itterate in every element of target array

for (let button of target){ // return button element one by one
    button.addEventListener ("click" , ()=>{ // need to apply functionality on that button // jaise hi button m click kro detination ka color change hoga
         destination.style.backgroundColor = button.id;
    }) 
}

// using forEach

// target.forEach((button)=>{
//     button.addEventListener("click" , ()=>{
//        destination.style.backgroundColor = button.id; 
//     })
// });

