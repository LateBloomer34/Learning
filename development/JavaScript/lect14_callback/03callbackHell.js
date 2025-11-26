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