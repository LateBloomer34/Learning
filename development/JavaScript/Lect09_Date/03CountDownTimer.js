// countDown Timer project

let d1 = new Date();
let d2 = new Date("2028-07-30T00:00:00");
let d3 = d2-d1;

let second = Math.floor(d3/1000);
let minute = Math.floor(second/60);
let hours = Math.floor((minute/60));
let day = Math.floor(hours/24);

let year = Math.floor((day/365));
let month = Math.floor((day%365)/30);
let remainingDay = (day%365)%30;

let remainingHours = hours % 24;
let remainingMinutes = minute % 60;
let remainingSeconds = second % 60;


console.log(`year ${year} month ${month} day ${remainingDay} hour ${remainingHours} minutes ${remainingMinutes} second ${remainingSeconds} `);

