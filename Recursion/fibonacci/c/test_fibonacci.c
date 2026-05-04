#include "./fibonacci.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);
    assert(fibonacci(6) == 8);
    assert(fibonacci(7) == 13);
    assert(fibonacci(10) == 55);

    assert(fibonacci_loop(0) == 0);
    assert(fibonacci_loop(1) == 1);
    assert(fibonacci_loop(2) == 1);
    assert(fibonacci_loop(3) == 2);
    assert(fibonacci_loop(4) == 3);
    assert(fibonacci_loop(5) == 5);
    assert(fibonacci_loop(6) == 8);
    assert(fibonacci_loop(7) == 13);
    assert(fibonacci_loop(10) == 55);

    int cache[100];
    memset(cache, -1, sizeof(cache));

    assert(fibonacci_memo(0, cache) == 0);
    assert(fibonacci_memo(1, cache) == 1);
    assert(fibonacci_memo(2, cache) == 1);
    assert(fibonacci_memo(3, cache) == 2);
    assert(fibonacci_memo(4, cache) == 3);
    assert(fibonacci_memo(5, cache) == 5);
    assert(fibonacci_memo(6, cache) == 8);
    assert(fibonacci_memo(7, cache) == 13);
    assert(fibonacci_memo(10, cache) == 55);

    printf("\nfibonacci passed the test\n");

    return 0;
}
