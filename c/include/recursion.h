#ifndef RECURSION_H
#define RECURSION_H

/*
 * Recurrence Relation
 - T[0] = 1
 - T[1] = 1
 - T[n] = T[n - 1] * n + O(1)

 * Time Complexity: O(n)
*/

int factorial(int n);

/* ========================================================================== */

/*
 * Recurrence Relation
 - T[0] = 0
 - T[1] = 1
 - T[n] = T[n - 1] + n + O(1)

 * Time Complexity: O(n)
 */

int sum_of_n(int n);

/* ========================================================================== */

/*
 * Recurrence Relation
 - T[x, 0] = 0
 - T[x, 1] = x
 - T[x, n] = T[x, n - 1] * x

 * Time Complexity: O(n)
*/

int pow_of_n(int x, int n);

#endif
