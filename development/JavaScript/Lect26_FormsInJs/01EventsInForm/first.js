let form = document.querySelector("form");


// event folllow the bubbling by default , if we change its state to capturing, add third argument in callabck as true

// always add value attribute in form– if we put any value inside that value attribute it is the default value of that input

// click event - whenever we put click on respected lement it will give us output ,  or reflected in console
// form.addEventListener('click' , (event)=>{
//     console.log(event.target.value);
// })


// types of event in form 

// 1- input event
// input -  whenever we give input in form, we gets the value of it, no need to click on that element ,  it will give us output with inserting input


// form.addEventListener("input" , (event)=>{
//     console.log(event.target.value);
// })

// 2- change event
//when we get away from that input section and do any Activity, it will refelect the change 

// if we modify and again undo that change , then change event will not trigger, 
// change event trigger only when event trigger


// form.addEventListener("change" , (event)=>{
//     console.log(event.target.value);
// })


//  3 - focus event - this event not follow bubbling, so we can not see the change , 

// form.addEventListener("focus" , (event)=>{
//     console.log(event.target.value);    
// })


// 4- focusin -  to overcome the problem of focus we use focus in event

// When we move into an element (like an input), the focusin event fires, so we can check its value or style. Later, when focus changes again, we know what element was active before.

// when we focus in the element we will gets the value// but we need to come from other element, it willnot trigger when we are in same element

// form.addEventListener("focusin" , (event)=>{
//     console.log(event.target.value);
// })


// 5- focusout -  we move away from an element (or one of its child elements). It can be used to check the value or state of that element when it loses focus.


// form.addEventListener("focusout" , (event)=>{
//     console.log(event.target.value);
    
// })

// 6- submit event - whenever we click , form will submit and page refresh.


// form.addEventListener("submit" , (event)=>{
//     // console.log(event.target.value);
//     // to check the form is submitted- 
//     console.log("form submmitted");
//     // form submitted for very short duration. till form submitted.
    
// })
// give us balnk console, coz form is sumbmitted, and all memory will release.



// 7- reset event
// when it trigger entire page will reset - it is only apply  when butoon type is reset , 

// form.addEventListener("reset" , (event)=>{
//     console.log("form reset");  
// })

// all input fileds are reset after using reset event on button, and all memory will release

// create a seperate button for reset, add reset event on that reset button




//event.preventDefault() ; // form will SubmitEvent, but page will not refresh.

