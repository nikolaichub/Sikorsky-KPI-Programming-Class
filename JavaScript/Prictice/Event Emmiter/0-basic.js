'use strict';

const EventEmmiter = function() {
    //console.log('> process emmited');
    this.events = {};
};

EventEmmiter.prototype.sayHello = function() {
    console.log(this);
};

EventEmmiter.prototype.on = function(name, fn) {
    //const events = this.events;
    const event = this.events[name];
    if (event) {
        event.push(fn);
    } else {
        this.events[name] = [fn];
    }
    //console.dir({event});
}

EventEmmiter.prototype.emit = function(name, ...params) {
    const event = this.events[name];
    //console.log(event);
    if (event) {
        event.forEach(fn => fn(...params));
    }
}

module.exports = EventEmmiter;