'use strict';

const phoneBook = [
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

// extended
function findPhoneByNameExtended(name) {
    for (let i = 0; i < phoneBook.length; i++) {
        const objUser = phoneBook[i];
        for (const userName in objUser) {
            if (objUser[userName] == name) {
                console.log(`${objUser.phone}`);

            }
        }
    }
};

// simplified
function findPhoneByName(name) {
    phoneBook.forEach(userObj => {
        if (userObj.name == name) {
            console.log(userObj.phone)
        }
    });
};

findPhoneByName('Artem');