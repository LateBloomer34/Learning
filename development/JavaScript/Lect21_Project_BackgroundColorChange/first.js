function changeColor(){

let ele = document.getElementById("root");
ele.innerHTML = "Click again in page to change color";
const min = 0;
const max =255;
const Col1 = Math.floor(Math.random()*(max-min+1)+min);
const Col2 = Math.floor(Math.random()*(max-min+1)+min);
const Col3 = Math.floor(Math.random()*(max-min+1)+min);
ele.style.backgroundColor = `rgb(${Col1}, ${Col2}, ${Col3})`;
ele.style.height = "100vh";
}

// setInterval(changeColor , 2000);


// document.onclick= function(){
//     changeColor();
// }                    

// recommeneded is addEvenetListner;
// let ele = document.getElementById("root");
// ele.addEventListener("click", changeColor);

document.addEventListener("click",changeColor);