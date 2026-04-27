/*
 * Recurrence Relation
 - T[0] = 1
 - T[1] = 1
 - T[n] = T[n - 1] * n + O(1)

 * Time Complexity: O(n)
*/

int factorial(int n) {
    if (n <= 1) return 1;

    return factorial(n - 1) * n;
}
