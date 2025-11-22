let button = document.getElementById("calc");
button.addEventListener("click" , sum);
let desti = document.getElementById("result")

function sum (){
    let ip1 = +(document.getElementById("firstIP").value);
    let ip2 = +(document.getElementById("secondIP").value);
    
    if (isNaN(ip1)|| isNaN(ip2)){
        return;
    }       // for if we have a input which is not a number
    let res = ip1+ip2;
    
    desti.innerText = res;
}




