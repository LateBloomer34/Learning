// callback function - a function which pass as an argumen inside other function in called call back function



function first(second){
    console.log(`${second()} i am himanshu`);  
}

function second(){
    return "hello";
}

first(second);

// usecase for callback - fetching data from backend.

// setTimeout

function fetchData(){
    console.log("fetch data")
}

//setTimeout(fetchData , 2000); // return the output after a particular given time .
// here it will reflect after 2000 milisecond


const intervalID = setInterval(fetchData , 2000) // after every 2 second fetchFunction retur output


setTimeout(()=>{
    clearInterval(intervalID);
} , 10000); // clear after 10 second 