// pizza order steps

function placeOrder(preparingOrder){
    console.log("taking with dominoz");
    setTimeout(() => {
        console.log("order place successfully");
        preparingOrder(dispatchOrder);
    }, 2000);
    
}

function preparingOrder(dispatchOrder){
    console.log("order start preparing");
    setTimeout(()=>{
        console.log("order cooked");
        dispatchOrder(deliverOrder);
    } , 3000);
    

}
function dispatchOrder (deliverOrder){
    console.log("order ready to dispatch wiatig for delivery boy");
    setTimeout(()=>{
        console.log("order dispactched, picked by delivery boy");
        deliverOrder();
    },3000)
    
}
function deliverOrder(){
    console.log("order out for delivery");
    setTimeout(()=>{
        console.log("order successfully delivered");
        
    }, 5000);
    
}
//
placeOrder(preparingOrder);


// problem with the call back  - 
// i- callback hell - to many nested callback 
//1-  problem with the callback - 

// readibility , maintainance, hard to debug, code increses vertically (pyramid shape)

// 2- inversion of control - we will loose control over the code, or give control of code to other funcion , in below example , thw dispacth order will only execute when preparingorder will execute, otherwise it will not work,

// placeOrder(preparingOrder); => the actual reprentation of this code is:-
//     placeOrder(()=>{
//         preparingOrder(()=>{
//             dispatchOrder(()=>{
//                 deliverOrder();
//             })
//         })
//     }) 