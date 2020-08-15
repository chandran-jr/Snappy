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

function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.

    const PI=Math.PI;

    let r=readLine();

    let a=0.0
    let p=0.0
    
    // Print the area of the circle:
    a= PI*r*r;
    console.log(a);
    
    // Print the perimeter of the circle:
    p=2*PI*r;
    console.log(p);
