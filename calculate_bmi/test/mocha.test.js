const assert = require('assert');
const calculator = require('../calculate_bmi.js');

describe('#bmi()', () => {
  it('In result we have Normal string', () => {
    assert.strictEqual(calculator.bmi(80, 1.8), 'Normal');
  });
  it('In result we have Underweight string', () => {
    assert.strictEqual(calculator.bmi(50, 1.8), 'Underweight');
  });
  it('In result we have Overweight string', () => {
    assert.strictEqual(calculator.bmi(80, 1.7), 'Overweight');
  });
  it('In result we have Obese string', () => {
    assert.strictEqual(calculator.bmi(80, 1.6), 'Obese');
  });
});
