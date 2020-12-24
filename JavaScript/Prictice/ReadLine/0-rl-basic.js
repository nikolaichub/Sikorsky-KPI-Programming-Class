'use strict';

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  prompt: '> ',
});

rl.prompt();

const commands = {
  help() {
    console.log('Commands:', Object.keys(commands).join(', '));
  },
  hello() {
    console.log('Hello there!');
  },
  calc() {
  },
  exit() {
    rl.close();
  }
};

rl.on('line', line => {
  line = line.trim();
  const command = commands[line];
  if (command) command();
  else console.log('Unknown command');
  rl.prompt();
});

rl.on('close', () => {
  console.log('\nThanks for using');
});

// try to escape
/*rl.on('SIGINT', () => {
  rl.question('Are you sure you want to exit? ', (answer) => {
    if (answer.match(/^y(es)?$/i)) rl.close();
  });
});*/
