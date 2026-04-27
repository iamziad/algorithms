#include "../include/recursion.h"

int factorial(int n) {
    if (n <= 1) return 1;

    return factorial(n - 1) * n;
}

/* ========================================================================== */

int sum_of_n(int n) {
    if (n == 0) return 0;

    return sum_of_n(n - 1) + n;
}

/* ========================================================================== */

int pow_of_n(int x, int n) {
    if (n == 0) return 1;

    return pow_of_n(x, n - 1) * x;
}
