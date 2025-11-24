// let desti = document.getElementById("root");

// desti.addEventListener("click" , (event)=>{
//     if(event.target.tagName == "button"){
//         desti.style.backgroundColor = event.target.id;
//     }
// })

// let desti = document.getElementById("root");

// desti.addEventListener("click" , (event)=>{
//     // console.log( event.target.tagName);
//     // console.log(event.target.id);
    
//     if (event.target.tagName === "BUTTON"){
//         // desti.style.backgroundColor = event.target.id;

//         // or

//         document.body.style.backgroundColor = event.target.id;
//     }
// })

let desti = document.querySelector("#root");

desti.addEventListener("click" , (event)=>{
    console.log(event.target.id);
    
     if (event.target.tagName === 'BUTTON'){
        desti.style.backgroundColor = event.target.id;
    }
})