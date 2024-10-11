/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    return {
        val: init,
        increment() {
            this.val++;
            return this.val;
        },
        decrement() {
            this.val--;
            return this.val;
        }, 
        reset() {
            this.val = init;
            return this.val;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */