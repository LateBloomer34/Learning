let promise = fetch(`http://api.weatherapi.com/v1/current.json?key=36b21bef96024b74a7462334252711&q=new delhi&aqi=yes`);

// fetch is the asynch task , so we can not access value from it directly , to get the value of promise we use thn then method, => we will get the value after promise will goes to resolve or reject state from pending state

// synatx to print promise - promise.then(rejsolve, reject).catch(error);

// console.log(promise); // can not access directly , coz promise is a asych task , it will display promise pending here.


// sytax to get value
// promise.then((value)=>{
//     console.log(value);
// }).catch((error)=>{
//     console.log("error found" , error); 
// })


// methos 1 for promise to access data
//  promise.then((response)=>{
//    let res = response.json();
//    res.then((value)=>{
//         console.log(value);
        
//     });
//  }); 

// method 2 for access data- 


// let pro = promise.then((response)=>{
//     return response.json();
// })
// pro.then((val)=>{
//     console.log(val);
// })


// method3 - promise chaining

// promise.then((response)=>{
//     return response.json();
// }).then((val)=>{
//     console.log(val.location.localtime);
// })


// we can wirte above code as -  here we remove the {} and retun keyword and () of paramenter

// promise
// .then(response=>response.json())
// .then(val=>console.log(val.location))


//fetch(`http://api.weatherapi.com/v1/current.json?key=36b21bef96024b74a7462334252711&q=new delhi&aqi=yes`).then(response=>response.json()).then(val=>console.log(val.location))

// add error section - write catch section only 1 time , 

// fetch(`http://api.weatherapi.com/v1/current.json?key=36b21bef96024b74a7462334252711&q=new delhi&aqi=yes`).then(response=>response.json()).then(val=>console.log(val.location)).catch(error=>console.log("error found")
// )


// other example of promise

let pro = new Promise((resolve, reject) => {
    // resolve( "pro success");
    reject("failed")  
})

pro
    .then(val => console.log(val))
    .catch(error => console.log(error))


    