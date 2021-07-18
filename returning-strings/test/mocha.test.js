const assert = require('assert');
const task = require('../returning-strings.js');

describe('#greet()', () => {
  it('Should return correct string with Andrey name', () => {
    assert.strictEqual(task.greet('Andrey'), 'Hello, Andrey how are you doing today?');
  });
  it('Should return correct string with Sasha name', () => {
    assert.strictEqual(task.greet('Sasha'), 'Hello, Sasha how are you doing today?');
  });
  it('Should return correct string with Komar name', () => {
    assert.strictEqual(task.greet('Komar'), 'Hello, Komar how are you doing today?');
  });
  it('Should return correct string with Holy Jesus name', () => {
    assert.strictEqual(task.greet('Holy Jesus'), 'Hello, Holy Jesus how are you doing today?');
  });
});
