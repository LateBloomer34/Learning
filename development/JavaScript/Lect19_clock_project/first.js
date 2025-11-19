
function time(){
const time = new Date()
const currTime  = time.toLocaleTimeString();

let obj = document.getElementById("root");
obj.innerHTML= currTime;
}
setInterval(time , 1000);



// setTimeout(() => {
//   clearInterval(a);
// }, 3000);

// console.log(Number(' \t\n 123 \r\n '));
