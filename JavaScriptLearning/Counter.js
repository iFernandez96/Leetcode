/**
 * @param {number} n
 * @return {Function} counter
 */

// Success
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
 * counter() // 11ss;
 * counter() // 12
 */