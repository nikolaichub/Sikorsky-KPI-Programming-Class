'use strict';

// Define function power - an alias to Math.pow().
const power = level => argument => argument ** level;

// Implement function `square(n)`, which returns square of its argument.
// The function may or may not reuse function `power`.
const square = power(2);
console.log('square of 2: ', square(2));

// Implement function `cube(n)` using partial application
// The function should return power of three for the given argument.
const cube = power(3)(2);
console.log('cube of 2: ', cube);
