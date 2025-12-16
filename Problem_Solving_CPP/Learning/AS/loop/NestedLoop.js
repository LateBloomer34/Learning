// nested loop - loop inside loop


for (let i = 0 ; i < 5  ; i++){
    let row  = "";
    for (let j = 0 ; j< 3  ; j++){
        row = row +"* ";
    }
    console.log(row);   
}

for(let i = 0 ; i < 3 ; i++){
    for (let j = 0 ;j < i ; j++){
        console.log("i=",i ,"j=", j);
    }
}


for(let i = 5 ; i > 0 ;i--){
    for(let j = 0 ; j< i ; j++){
        console.log(i , j); 
    }
}

