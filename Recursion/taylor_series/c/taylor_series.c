#include "./taylor_series.h"
#include <stdlib.h>

/*
 * Recursive Formula
 - e(x, n) = e(x, n - 1) + pow(x) / f(n)

 * Time Complexity: O(n), because the function calls itself untill n becomes 0
   with constant number of work done in each call

 * Number of Multipications is 2 * n, because each call do 2 multiplications
 */

/*
 * Note: even though this topic is about recursion, but i feel that the
   iterative version makes more sense for me (always..i hate recursion!)
 */
double e(int x, int n) {
    double p = 1.0, f = 1.0, sum = 1.0;

    for (size_t i = 1; i <= n; i++) {
        p *= x;
        f *= i;
        sum += p / f;
    }

    return sum;
}
