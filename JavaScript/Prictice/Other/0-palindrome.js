'use strict';

const string = 'Анна';
const palindrome = isPalindrome(string);

function isPalindromeShort(string) {
    return string.toLowerCase().split('').reverse().join('') === string.toLowerCase();
}

function isPalindrome(string) {
    const lowerCased = string.toLowerCase();
    const splitted = lowerCased.split('');
    const reversed = splitted.reverse();
    const stringed = reversed.join('');
    return lowerCased === stringed;
}

console.log(palindrome); // true