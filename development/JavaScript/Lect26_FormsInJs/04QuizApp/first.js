const quizAnswer = {
    q1:'"1,2,34,5,6"',
    q2:"1",
    q3:"false",
    q4:"slice()",
    q5:'"object"',
    q6:"ReferenceError",
}

const form = document.querySelector("form");

form.addEventListener("submit" , (event)=>{
    event.preventDefault();
    const data = new FormData(form);
    // let answer = [...data.values()]; // give us the value of from
    // console.log(answer);
    
    let count = 0 ;
    for (let [key, value] of data.entries()){ // provide us the data in key value pair from form
        if (value===quizAnswer[key]){
            count++;
        }
    }
    const resultBox = document.getElementById("result");
    resultBox.textContent = `you scored ${count}  out of 6 on this quiz`;
})

// reset button

const resultBox = document.getElementById("result");
const rstButton  = document.getElementById("rstButton");

rstButton.addEventListener("click" , ()=>{
    resultBox.textContent = "आपने रीसेट बटन दबा दिया है, कृपया अपने उत्तर पुनः सबमिट करें";
})