'use strict';

const phoneBookCollection = [
    {
        name: 'Nikolai',
        phone: '+380824255367'
    },
    {
        name: 'Dima',
        phone: '+380924629544'
    },
    {
        name: 'Artem',
        phone: '+380371651644'
    },
    {
        name: 'John',
        phone: '+380259543874'
    }
];

// first variation 'extended'
function findPhoneByNameExtended(name) {
    for (let i = 0; i < phoneBookCollection.length; i++) {
        const objUser = phoneBookCollection[i];
        for (const userName in objUser) {
            if (objUser[userName] == name) {
                console.log(`${objUser.phone}`);

            }
        }
    }
};

// second variation 'simplified'
function findPhoneByName(name) {
    phoneBookCollection.forEach(userObj => {
        if (userObj.name == name) {
            console.log(userObj.phone)
        }
    });
};

// second part

findPhoneByName('Dima');

const hash = {
    'Nikolai': '+380824255367',
    'Dima'   : '+380924629544',
    'Artem'  : '+380371651644',
    'John'   : '+380259543874',
}

function findPhoneByNameInHash(name) {
    return hash[name] ? hash[name] : 'no such number'; 
}


console.log(findPhoneByNameInHash('John'));
console.log(findPhoneByNameInHash('66'));