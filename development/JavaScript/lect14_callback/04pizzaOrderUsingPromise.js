// pizaa order using promises


function placeOrder(){
    console.log("taking with dominoz");
    return new Promise ((resolve, reject)=>{
        setTimeout(()=>{
            console.log("order place successfully");
            resolve();
        } , 2000)
    })
}
function preparingOrder(){
    console.log("order start preparing");
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{ console.log("order cooked");
        resolve();
        }, 3000)
    })
}
function dispatchOrder(){
    console.log("order ready to dispatch");
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
             console.log("order dispactched, picked by delivery boy");
             resolve();
            },3000)
    } )
}
function deliverOrder(){
    console.log("order out for delivery");
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
              console.log("order successfully delivered");
              resolve();
        },5000)
    })
    
}
placeOrder().then(preparingOrder).then(dispatchOrder).then(deliverOrder);