const sum = require('./sum');
const assert = require("assert");

describe('simple tests', () => {
  it('should return 3', () => {
    assert.strictEqual(sum([1, 2]), 3);
  });
});
