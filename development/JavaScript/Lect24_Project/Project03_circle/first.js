let destination = document.getElementById("root");

function operation(e){
    // this is a callback function so it will return comes with an event , e is event here

    let circle = document.createElement("div");
    circle.textContent = "yipee";
    circle.id = "innerCircle";



    const x = e.clientX; //e is the event , clientX return X position 
    const y = e.clientY;
    
    circle.style.left = ` ${x-25}px `;
    circle.style.top = `${y-25}px`;

    destination.appendChild(circle);

    // function for random color generation

    let num1 = Math.floor(Math.random()*255);
    let num2 = Math.floor(Math.random()*255);
    let num3 = Math.floor(Math.random()*255);
    circle.style.backgroundColor = `rgb(${num1}, ${num2}, ${num3})`;

    setTimeout(()=>{
        circle.remove();
    }, 3000);
    // if we dont add this settimeout circle it will stay in our codeit will consume more memory, so need to remove it after 5 sec , settimeOut will atomatically delete that element after 5 sec

}


destination.addEventListener("click", operation)