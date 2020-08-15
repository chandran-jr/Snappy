'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
/*
 * Create the function factorial here
 */
function factorial(m){
    let fact=1;
    for(let i=1;i<=m;i++){
        fact = fact*i;
 }
 if(m==0){
     fact=1;
 }
 return fact;
}


function main() {
    const n = +(readLine());
    
    console.log(factorial(n));
}
