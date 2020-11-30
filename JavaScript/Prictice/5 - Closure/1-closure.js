'use strict';

const arr = array();

// closure and chaining combined
function array(el) {
    return {
        arr: [],
        push(el){
            this.arr.push(el);
            return this;
        },
        pop(){
            this.arr.pop();
            return this;
        },
        showAll(){
            console.log(this.arr);
            return this;
        },
        showAt(idx){
            console.log(this.arr[idx]);
            return this;
        }
    };
}

// can be executed separatery
arr.push('cat');
arr.push('lion');

// can be executed one by one
arr.push(5).pop().push('puma').push('lynx').pop().showAt(2);