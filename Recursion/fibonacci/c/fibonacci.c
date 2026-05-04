#include "./fibonacci.h"

/*
 * Recursive Formula
 - T[0] = 0
 - T[1] = 1
 - T[n] = T[n - 2] + T[n - 1]

 * Time Complexity: O(2^n), because each call branches another two calls
 */
int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 2) + fibonacci(n - 1);
}

/*
 * Time Complexity: O(n - 3) -> O(n)
 */
int fibonacci_loop(int n) {
    if (n <= 1)
        return n;

    int t1 = 1;
    int t2 = 1;

    for (int i = 3; i <= n; i++) {
        int tmp = t2;
        t2 = t1 + t2;
        t1 = tmp;
    }

    return t2;
}

/*
 * Time Complexity: O(n), because we eleminated redundant calls, so each call is
   unique meaning fibonacci(n) will do n calls not 2^n calls
 */
int fibonacci_memo(int n, int cache[]) {
    if (n <= 1)
        return n;

    if (cache[n] != -1)
        return cache[n];

    cache[n] = fibonacci_memo(n - 2, cache) + fibonacci_memo(n - 1, cache);
    return cache[n];
}
