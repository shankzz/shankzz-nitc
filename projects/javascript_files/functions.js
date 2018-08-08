//first way to create a function
let greetuser=function(){
    console.log("Hello world");
}

greetuser();

//Another function accepts an arguement
let square= function(num){
let result=num*num;
return result;//returns the square of the number given.
}

console.log(square(3));
console.log(square(5));
//challenge convert fahr to cels;
let convertFahrtoCel=function(fahr){
    let cel=5*(fahr-32)/9;
    return cel;
}

console.log(convertFahrtoCel(32));
console.log(convertFahrtoCel(68));

//undefined shows absence of assigning some value to the variable.
//null shows that the variable has been cleared of its,
//value explicitly and assigned null.....
let age=undefined;
//let age=null; done to reset the value explicitly..
//functions with multiple arguements
let add = function(a,b,c){
     let result=a+b+c;
     return result;
} 

console.log(add(1,2,3));

//default arguements
let getScore = function (name='Harshal',score=10){
    console.log(name);
    console.log(score);
}

getScore('hari',13);
getScore(14);
getScore('Swathi');
getScore();
//challenge tip calculator
let getTip = function(tip,tipPercent=0.2)
{
    let sal=tip+(tip*tipPercent);
    return sal;
}

console.log(getTip(100,0.5));

//template strings...
let name = function(name,age)
{
    return `Your name is ${name} and you are ${age} years old`;
    //format strings should be between ` and `
}

console.log(name('Asha',46));