'use strict';


/*const getRandom = (min, max) => {
    //return Math.floor(Math.random() * max + 1); //works in lack of min value
}*/

/* function getRandom(min, max) {
    return Math.floor(Math.random() * (max - min) + min + 1);
}*/

let times = 20;
const randomMultiOutput = []

// for lazy output
for (let i = 0; i <= times; i++) {
    randomMultiOutput.push(getRandom(50, 100));
}
console.log(randomMultiOutput);
