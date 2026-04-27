/*
 * Recurrence Relation
 - T[x, 0] = 0
 - T[x, 1] = x
 - T[x, n] = T[x, n - 1] * x

 * Time Complexity: O(n)
*/

int pow_of_n(int x, int n) {
    if (n == 0) return 1;

    return pow_of_n(x, n - 1) * x;
}
