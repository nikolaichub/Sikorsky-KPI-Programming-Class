'use strict';

function fn() {
    const firstUser = {
        name: 'Nikolai',
    }

    let secondUser = {
        name: 'Dima',
    }

    // changing is allowed for both
    firstUser.name = 'Kolya'; 
    secondUser.name = 'Mityai';

    // adding is allowed for both
    firstUser.homeTown = {
        city: 'Kyiv',
        country: 'Ukraine'
    }

    secondUser.homeTown = {
        city: 'Beijing',
        country: 'China'
    }

    return {firstUser, secondUser};
}

console.log(fn());

function createUser(name, city) {
    return {
        userName: name,
        userCity: city
    };
}

console.log(createUser('Nikolai', 'Kyiv'));
console.log(createUser(fn().secondUser.name, fn().secondUser.homeTown.city));