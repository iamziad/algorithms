#include "../include/recursion.h"
#include <stdio.h>

/* ========================================================================== */

/*
 * Recurrence Relation
 - T[0] = 1
 - T[1] = 1
 - T[n] = T[n - 1] * n + O(1)

 * Time Complexity: O(n)
 */

int factorial(int n) {
    if (n <= 1)
        return 1;

    return factorial(n - 1) * n;
}

/* ========================================================================== */

/*
 * Recurrence Relation
 - T[0] = 0
 - T[1] = 1
 - T[n] = T[n - 1] + n + O(1)

 * Time Complexity: O(n)
 */

int sum_of_n(int n) {
    if (n == 0)
        return 0;

    return sum_of_n(n - 1) + n;
}

/* ========================================================================== */

/*
 * recurrence relation
 - t[x, 0] = 0
 - t[x, 1] = x
 - T[x, n] = T[x, n - 1] * x

 * Time Complexity: O(n)
 */

int pow_of_n(int x, int n) {
    if (n == 0)
        return 1;

    return pow_of_n(x, n - 1) * x;
}

/* ========================================================================== */

/*
 * Recursive Formula
 - f(x, n) = 0                     -> n == 0
 - f(x, n) = f(x * x, n / 2)       -> n % 2 == 0
 - f(x, n) = f(x * x, n / 2) * x   -> n % 2 > 0

 * Time Complexity: O(logn)
 - n is divided by 2 at each call untill it reaches 0
 */

int fast_pow_of_n(int x, int n) {
    if (n == 0)
        return 1;

    if (n & 1)
        return fast_pow_of_n(x * x, n / 2) * x;
    else
        return fast_pow_of_n(x * x, n / 2);
}

/* ========================================================================== */

/*
 * Recursive Formula
 - e(x, n) = e(x, n - 1) + pow(x) / f(n)

 * Time Complexity: O(n), because the function calls itself untill n becomes 0
   with constant number of work done in each call

 * Number of Multipications is 2 * n, because each call do 2 multiplications
 */

double taylor_series(int x, int n) {
    if (n == 0)
        return 1;

    static double p = 1.0;
    static double f = 1.0;

    double r = taylor_series(x, n - 1);
    p *= x;
    f *= n;

    return r + p / f;
}

/* ========================================================================== */

/*
 * A tail recursion version of taylor_series that doesn't use static variables,
   and use less space complexity
 */

double taylor_series_tail(int x, int n, double p, double f, double sum) {
    if (n == 0)
        return 1 + sum;

    p *= x;
    f *= n;
    sum += p / f;

    printf("mul\n");

    taylor_series_tail(x, n - 1, p, f, sum);
}

/* ========================================================================== */

double taylor_series_ite(int x, int n) {
    double p = 1.0;
    double f = 1.0;
    double sum = 1.0;

    for (int i = 1; i <= n; i++) {
        p *= x;
        f *= i;
        sum += p / f;
        printf("mul\n");
    }

    return sum;
}

/* ========================================================================== */
