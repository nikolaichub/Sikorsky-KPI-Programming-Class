'use strict';

const string = 'riq@eledda-7443@yopmail.com i dont emepakaca-7876@yopmail.com now js please xullazorrope-6242@yopmail.com help me';

function getEmail(string) {
    const emails = [];
    const array = string.split(' ');
    for (const word of array) {
        if (isEmail(word)) {
            emails.push(word);
        }
    }
    return emails;
}

function isEmail(email) {
    const regExEmail = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return regExEmail.test((email).toLowerCase());
}

console.log(getEmail(string));