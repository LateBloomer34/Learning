
function time(){
let currentTime = new Date();
let targetTime = new Date(Date.UTC(2026 , 0 ,1));

const remTime = targetTime - currentTime;
const remTimeSecond = (remTime/1000);
const remTimeMinute = remTimeSecond / 60;
const remTimeHours = remTimeMinute / 60;
const remTimeDay = remTimeHours / 24;
const remTimeMonth = remTimeDay / 30;


const second = document.getElementById("sec");
second.innerHTML = Math.floor(remTimeSecond%60);

const minute = document.getElementById("min");
minute.innerHTML = Math.floor(remTimeMinute%60);

const hour = document.getElementById("hr");
hour.innerHTML = Math.floor(remTimeHours%24);

const day = document.getElementById("dy");
day.innerHTML = Math.floor(remTimeDay%24);

const month = document.getElementById("mon");
month.innerHTML = Math.floor(remTimeMonth%24);
}

setInterval(time , 1000);

 

