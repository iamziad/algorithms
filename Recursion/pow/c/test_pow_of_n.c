#include "./pow_of_n.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 1e-6

int main() {

    assert(pow_of_n(2, 3) == 8);
    assert(pow_of_n(2, 5) == 32);
    assert(pow_of_n(5, 9) == 1953125);
    assert(fabs(pow_of_n(3, -6) - 0.0013717) <= EPSILON);
    assert(pow_of_n(4, 6) == 4096);

    printf("\npow_of_n passed the test\n");

    return 0;
}
