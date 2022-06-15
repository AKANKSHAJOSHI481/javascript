console.log("Welcome to jAVAsCRIPT");
let a = document
 a = document.all;
// a = document.body;
// a = document.forms; 
// Array.from(a).forEach(function(element){
//     console.log(element);
// })
//a = document.links[0].href;
a = document.images[0].src;
Array.from(a).forEach(function(element){
    console.log(element);
})
a= document.scripts[0];
Array.from(a).forEach(function(element){
    console.log(element);
})
console.log(a);
