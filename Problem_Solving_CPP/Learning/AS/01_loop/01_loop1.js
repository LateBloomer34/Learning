console.log("hello");


// loop - doing thing again and agin

// problem- print hello world 20 times 


// for loop

for (let i = 0 ; i < 20 ; i++){
    console.log(i+1 , "hello");
}

// initilization , condition , increment/ decrement


// using while loop

let i = 0 ;

while(i<20){
    console.log(i+1 , "hey");
    i++;
}


// using do while loop

let j = 0;
do{
    console.log(j+1 , "hello");
        j++;
}
while(j<20);



// hello world in reverse manner form 5 to 1

for (let i = 5 ; i>0 ; i--){
    console.log(i , "hello hi");
    
}

for(let i = 5 ;i<4 ; i++){
    console.log("himanshu");
    
}
// this code will never run ;


//  for (let i = 1 ;  i>0 ; i++){
//     console.log("india");
    
//  }
 // it will print infinite times // infinite loop


//  add function inside a loop

function fun(){
        console.log("hello");
    }
for(let i = 0 ; i< 3 ; i++){
    fun();
}


let arr = [6,3,0 , 8,3,];
console.log(arr[0]);
console.log(arr[10]); // undefined

console.log(arr.length);

// how loop and array work together


let arr1 = [1,2,3,4,5,6,7,6,5,4,3,2,1];

for(let i = 0  ; i<arr1.length ; i++){
    console.log(arr1[i]);  
}

// print all even number from arr1;

let j1 = 0;
for (let i = 0; i< arr1.length ; i++){
    if (arr1[i]%2 == 0){
        console.log( `${j1+1}  st even number of the array ${arr1[i]}`);   
        j1++;
    }
}


// print odd number from an array

let j2 = 0
for (let i = 0 ; i <arr1.length ; i++){
    if (arr1[i]%2 != 0){
        console.log(`${j2}st odd is ${arr1[i]}`);
    }
    j2++;
}

