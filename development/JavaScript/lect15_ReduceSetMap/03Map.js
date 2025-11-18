// map is the collection of key value pair of any data type
  

// creation of map 

let map = new Map ([
    [4 , "four"],
    ["3" , "three"],
    [1 , 1]
])
console.log(map);


// creation of map method 2 -
let map1 = new Map();

// add value in map  - 

map1.set(4 , "four");
map1.set("3" , "three");
map1.set(1,1);
console.log(map1);


// delete value from map

map1.delete("3");
console.log(map1);


// to check size of map

console.log( map1.size);

// to cler map ;
map1.clear();
console.log(map1);



