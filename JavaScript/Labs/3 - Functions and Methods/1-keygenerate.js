'use strict';

// imports getRandom function
const randomModule = require('./0-random');

const characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';
const generateKey = (len, chars) => {
    let key = '';
    for (let i = 0; i < len; i++) {
        let randomIndexOfChars = randomModule.getRandom(0,chars.length);
        key += `${chars[randomIndexOfChars]}`;
    };

    return key;
};


console.log(generateKey(9, characters));