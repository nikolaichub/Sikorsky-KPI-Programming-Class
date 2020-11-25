'use strict';

const ipAdress = '192.168.1.10';
const transformedIp = transformIpAdress(ipAdress);

// weird, old and very extended method
function transformIpAdress(array) {
    const base = array.split('.').map(Number);
    let final = [];
    for (let i = 0; i < base.length; i++) {
        let baseElement = base[i];
        for(let j = 1; j < base.length - i; j++){
            baseElement = baseElement << 8;
        }
        final.push(baseElement);
    }

    return final.reduce((a,b) => a + b);
}

console.log(transformedIp);