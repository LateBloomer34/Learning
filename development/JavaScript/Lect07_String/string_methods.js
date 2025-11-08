// length - to print the legth of string 

let a = "Himanshu is a men";
console.log(a.length);

//  to convert in uppercase

console.log(a.toUpperCase());
console.log(a);

// to convert in lowerCase

console.log(a.toLowerCase());


// to print a particulat location character
console.log(a[3]);

// is include in string
console.log(a.includes("ma"));


// to find the location
console.log(a.indexOf("ma"));

// to find char at location
let b = "himanshu"
console.log(b.charAt(3));



// extracting subString
// substring - to crete a substring 
// subString(startingIndex , LastIndex)
console.log("subSting" , b.substring(1,3)); 

// subStr

// PushSubscription(startingIndex, length)
console.log(a.substr(1,4));

// slice

console.log("slice", a.slice(1,3));

// what is difference between slce and SubString-  slice takes negative index also , bu subString not takes -ve index


console.log(b.slice(-7 , 5));
console.log(b.substring(-7 , 5)); // substring consider -ve index as 0


// but if -ve index is gretaer than last index slice will return empty string

console.log(b.slice(-2 , 4)); // it returns enpty string


// replacing content

console.log(b.replace("h", "b")); // replace only first  target string or keyword

// to replce all string or character we can use replace all method

console.log(b.replaceAll("h", "b"));

// split - split the string in basis of  - it will return an array

let str = "himanshu is a good boy";
console.log(str.split(" "));
console.log(str. split("a"));


// trim - remove the white space 


let str1 = "     himanshu is        a      ";
console.log(str1.trim());
console.log(str1.trim().length);

// trim only remove starting and ending white space 








