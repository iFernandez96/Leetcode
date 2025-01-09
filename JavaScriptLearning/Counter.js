/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let num = n;
    return function() {
        let new_num = num;
        num++;
        return new_num;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */