#include "./pow_of_n.h"

/*
 * Recursive Formula
 - f(x, n) = 1                 -> n = 0
 - f(x, n) = x                 -> n = 1
 - f(x, n) = f(x, n / 2)       -> n < 0
 - f(x, n) = f(x, n / 2) * x   -> n < 0

 * Time Complexity: O(logn)
   - Because we are dividing n by 2 untill it reaches 0
 */
double pow_of_n(int x, int n) {
    if (n < 0)
        return 1 / pow_of_n(x, -n);

    if (n == 0)
        return 1;

    if (n & 1)
        return pow_of_n(x * x, n / 2) * x;
    else
        return pow_of_n(x * x, n / 2);
}
