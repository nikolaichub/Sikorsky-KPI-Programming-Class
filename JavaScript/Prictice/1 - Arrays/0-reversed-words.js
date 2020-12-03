'use strict';

// reverse each word of a string
const original = 'Welcome to the club body!';
const reversed = revWordsShort(original);

// short version
function revWordsShort(string) {
    return string.split(' ').map(word => word.split('').reverse().reduce((prevWord, nexWord) => prevWord + nexWord)).join(' ');
}

console.log(reversed);