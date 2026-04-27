
/*

 * Recurrence Relation
 - T[0] = 0
 - T[1] = 1
 - T[n] = T[n - 1] + n + O(1)

 * Time Complexity: O(n)

*/
int sum_of_n(int n) {
    if (n == 0) return 0;

    return sum_of_n(n - 1) + n;
}
