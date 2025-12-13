// array creatioon in ts

let arr:(number | object)[] = [1,2,3,{name:"him" , class:"12"}];
console.log(arr);
console.log(typeof arr);

let arr1 : number[] = [1,2,3,4];
console.log(arr1);

let arr2 : (number | string)[] =[1,2,3,"hi"];
console.log(arr2);
 

// creation of tuple -  tuple is fixed size of array , in which we must declear the type of every element
// In TypeScript, a tuple is used when:

// The number of elements is fixed

// Each element can have a different data type

// The order and type of elements matter

let tupl:[number , number , string , boolean] = [1,2,"hi",true];
console.log(tupl);






// object in TS - 

//inline object - An inline object type is used to define the shape of an object directly where it is declared.

// Inline object with declaration + initialization together

let obj:{name:string , class:number} = {name:"him" , 
                class:12,
}
console.log(obj);

// Inline object with delayed initialization

let obj2:{name:string ; class:number};
obj2 = {name:"him" , 
                class:12,
};
console.log(obj2);


// type - creation of object using type keyword

type student  = {name:string , 
                class:number,
                subject:string,
};

// type student = {state : string} // can not recereate student type;

let detail:student = {name:"him" , 
                class:12,
                subject:"ts"
};
console.log(detail);



// interface -  creation og object using interface keyword

interface details {
                    name:string , 
                class:number,
                subject:string,
}

let user:details = {
    name:"him",
    class:12,
    subject:"computer"
}
console.log(user);

// what is the difference between type and interface
// in interface we can create extra iterface with same name - no need to moditify orinal interface ,
// but we can not create another type with same name


interface himanshu  {
    class:number,
    age:number
}

// crete on more interface with same name
interface himanshu{
    height:number;
    city:string
}

let detai: himanshu = {
    class: 12,
    age:18,
    height:168,
    city:"uttarakhand"

}
console.log(detai);



// using interface is the best practice , Use interface for objects and public APIs; use type for unions, primitives, and complex types.