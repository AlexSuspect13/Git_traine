const sum = require('./main')

describe('main success', () => {
    it('should return 3', () => {
        expect(sum([1, 2])).toBe(4)
    })

    it('should return 15', () => {
        expect(sum([7, 8])).toBe(15)
    })

    it('should return 125', () => {
        expect(sum([50, 75])).toBe(125)
    })
})
