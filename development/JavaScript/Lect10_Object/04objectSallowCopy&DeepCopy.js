// copyig of object- create a copy / clone of object 

let obj = {
    name:"him",
    0:"first",
    undefined:"null"
    }
    console.log(obj.name);
    console.log(obj["name"]);
    console.log(obj[0]);
    console.log(obj["0"]);
    console.log(obj.undefined);
    
    
    console.log(obj.toString());

    let arr = [1,2,3,4,5,6];
    console.log(arr.toString());


    // shallow copy - call by reference 
    // deep copy - call by value

    // shallow copy - we can crete copy , but if we made nay changes in copy object than that chages also deflected in orignal object
    
    
    const obj1 = {
        name:"him",
        class:12,
        gender:"male"
    }

    const obj2 = obj1;
    console.log("obj1",obj1);
    console.log("obj2",obj2);
    obj2.name = "raju";


     console.log("obj1",obj1);
    console.log("obj2",obj2);
    // chages made in obj1 also coz copy made by copy by refrences , this is called the sallow copy.

     const obj3 = {
        name:"him",
        class:12,
        gender:"male"
    }
    const obj4 = structuredClone(obj3);
    console.log("obj3",obj3);
    console.log("obj4",obj4);
    
    obj4.name = "raju";
    console.log("obj3",obj3);
    console.log("obj4",obj4);

    // no changes in obj3(in orignal array) ,  best method of cloning


