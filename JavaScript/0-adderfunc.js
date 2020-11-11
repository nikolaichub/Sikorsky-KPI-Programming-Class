'use strict';

const adder = (initial = 0) => ({
    value: initial,
    array: [initial],
    counter: 0,
    add(value){
        this.value += value;
        this.array.push(value);
        this.counter++;
        return this;
    }
});

const adderFunction = adder(5).add(5).add(-55);
/*console.log(adderFunction);
for(const element in adderFunction){
    console.log(element);
}*/
