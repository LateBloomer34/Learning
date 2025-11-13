// object destructuring- take values out of an array or object and put them into variables in one easy step.

const obj = {
    names:"him",
    classs:"first",
    status:"null",
    gender:"male",
    };
// basic destructuring
    const {names , classs} = obj;
    console.log(names);
    console.log(classs);


    // rename the varibale name
    const{status:study, gender:sex } = obj;
    console.log(study);
    console.log(sex);
    console.log(obj);
    
    // assign new value

  const{city = "chmapwat" , state =   "uk"} = obj;
  console.log(city);
  console.log(obj);
  console.log(obj.city); // return undefined coz destructuring willnot update the value , for update value use normal method;


  
  
    
    
    
