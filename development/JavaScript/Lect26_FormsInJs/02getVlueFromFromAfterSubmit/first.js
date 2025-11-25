let form = document.querySelector("form");

form.addEventListener("submit"  ,(event)=>{
    event.preventDefault();
    // if we dont  use preventDefault, full page will refresh quickly , vlaue comes form short time after that page will reset 


    // method 1 to get data - 
    /*
    let valueFirstName = document.getElementById("userName");
    let valueLastName = document.getElementById("lastName");
    let valueAge = document.getElementById("age");
    
    let doc = document.getElementById("submittedValue");

    doc.innerHTML=`your first name is ${valueFirstName.value}  last name is ${valueLastName.value} and you are  ${valueAge.value} old`;
    */


    //method2  - advance method using getData() api

    const formData = new FormData(form);
    const dataArray = [...formData];
    // console.log(dataArray);
    let dest = document.getElementById("submittedValue");
    for(let value of dataArray.keys()){
        // console.log(value);
    dest.innerText = value;
        
    }


    
})