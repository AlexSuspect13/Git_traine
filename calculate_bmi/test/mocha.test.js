const assert = require('assert');
const calculator = require('../calculate_bmi.js');

describe('#bmi()', () => {
  it('Should return a normal result', () => {
    assert.strictEqual(calculator.bmi(80, 1.8), 'Normal');
  });
  it('Should return an underweight result', () => {
    assert.strictEqual(calculator.bmi(50, 1.8), 'Underweight');
  });
  it('Should return an overweight result', () => {
    assert.strictEqual(calculator.bmi(80, 1.7), 'Overweight');
  });
  it('Should return an obese result', () => {
    assert.strictEqual(calculator.bmi(80, 1.6), 'Obese');
  });
});
