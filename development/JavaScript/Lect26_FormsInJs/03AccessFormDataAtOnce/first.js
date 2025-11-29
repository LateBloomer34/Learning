let form = document.querySelector("form");


// get full data of form using form data object

// let formData = new FormData(form);
// console.log(formData);
 



// it is an api to get form entire data;
let subButton  = document.querySelector("#button");

subButton.addEventListener("click" , (event)=>{
    event.preventDefault()

    let formData = new FormData(form);

    // to look at form data
// console.log(formData);

    // iterate value of form data  object

    // method1 - for each method

    // formData.forEach((value)=>{
    //     console.log(value);   
    // })


    // method2 -
    // iterate value using from array

    // console.log(Array.from(formData.keys()));
    // console.log(Array.from(formData.values()));

    // method3 -
    // iterate using spread operator

// to access keys
    // let val = [...formData.keys()];

    // to access values
    let val = [...formData.values()];
    // console.log(val);

    // we can use fromData.entries() also
    
    let [firstName ,lName , age ] = val
    for (let value of val ){ 
        // console.log(value);

        let des = document.getElementById("result");

        des.innerHTML = `first name is ${firstName}last name is ${lName}age is ${age}`

    }
    
});


