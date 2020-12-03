'use strict';

// reverse each word of a string
const original = 'Welcome to the club body!';
const reversed = reverseWords(original);

// extended version
function reverseWords(string) {
    // splits a string to an array
    let splittedArr = string.split(' ');
    let reversedArr = [];
    splittedArr.forEach(word => {
        // splits word into letters
        let splittedWord = word.split('');

        // reverses letters
        let reversedWord = splittedWord.reverse();

        // adds to final array connected word
        reversedArr.push(reversedWord.join(''));
    });

    // connects all pieces
    return reversedArr.join(' ');
}

// short version
function reverseWordsShort(string) {
    return string.split(' ').map(word => word.split('').reverse().reduce((prevWord, nexWord) => prevWord + nexWord)).join(' ');
}

console.log(reversed);