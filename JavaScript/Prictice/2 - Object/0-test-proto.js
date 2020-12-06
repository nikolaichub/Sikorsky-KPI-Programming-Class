'use strict';


/*const obj = {};
const obj1 = new Object({});

console.log('obj === obj1: ', obj === obj1); // false
console.log('obj.__proto__ === obj1.__proto__: ', obj.__proto__ === obj1.__proto__); // true

const str = '';
const str1 = new String('');

console.log('\nstr === str1: ', str === str1); // false
console.log('str.__proto__ === str1.__proto__: ', str.__proto__ === str1.__proto__); // true

const num = 20;
const num1 = 20;
const num2 = new Number('20');

console.log('\nnum === num1: ', num === num1);
console.log('num === num2: ', num === num2); // false
console.log('num.__proto__ === num2.__proto__: ', num.__proto__ === num2.__proto__); // true

const arr = [];
const arr1 = new Array();

console.log('\narr === arr1: ', arr === arr1);
*/

const obj = new Object({
    num: 1,
    str: 'str',
    bol: false,
    fn: function (){
        return 'fn';
    },
});

Object.prototype.showContex = function () {
    return this;
}

Object.prototype.sayHello = function () {
    return 'Hello!';
}

console.log(obj.showContex());
console.log(obj.sayHello());
