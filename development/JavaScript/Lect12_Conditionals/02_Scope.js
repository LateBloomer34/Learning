// var not follow the block scope rule , we can access variable outside the block using var


for (let i = 0; i< 6 ; i++){
    // console.log(i);    
}
for (var j = 0; j< 6 ; j++){
    // console.log(j);    
}
console.log(j);  // we can access j outside the block coz j is created using var. 