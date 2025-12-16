//1 - star pattern

for (let i = 0 ;i < 5 ; i++){
    let row = "";
    for (let j = 0 ; j < 4 ; j++){
        row = row +"* "
    }
    console.log(row);
}
console.log("\n");

// triangle pattern

for (let i = 0 ; i < 4 ; i++){
    let row = "";
    for (let j = 0 ; j <=i ; j++){
        row = row+"* ";
    }
    console.log(row);
    
}

// traiangle pattern 

for (let i = 0 ; i < 5 ; i++){
    let row  = "";
    for (let j = 0 ;j <= i ;j++){
        row  = row+(j+1) + " ";
    }
    console.log(row);
    
}


// triangel pattern

for (let i =0 ; i < 5 ; i++){
    let row = "";
    for (let j = 0 ; j <= i ;j++){
        row = row+(i+1)+" ";
    }
    console.log(row);
}
console.log("\n");

// inverse triangle

for(let i = 0 ; i< 5 ;i++){
    let row = "";
    for (let j = 0 ; j < 5-i ; j++){
        row = row+(j+1) +" ";
    }
    console.log(row);
    
}

// triangle 

for (let i = 0 ; i<5 ; i++){
    let row = "";
    for (let j = 0 ; j < 5-i-1 ;j++){
        row = row + "  ";
    }
    for (let j = 0 ; j <=i ;j++){
        row  = row+ "* "
    }
    console.log(row);
    
}


// triangle with 1010

for (let i = 0 ; i< 5 ; i++){
    let row = "";
    for (let j = 0 ; j <=i ;j++){
        if (j%2==0){
            row = row+1+" ";
        }
        else{
            row = row+0+" ";
        }
    }
    console.log(row);
}

console.log("\n");

// random 1 0 triangle;
// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1 

let count = 0 ;
for (let i = 0 ; i < 5 ; i++){
    let row  = "";
    for (let j = 0 ; j <= i ;j++){
        if (count%2==0){
            row  = row+1+" ";
        }
        else{
            row = row+0+" ";
        }
        count++;
    }
    console.log(row);
    
}
