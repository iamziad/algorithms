#include "./taylor_series.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 1e-6

int main() {
   // e^1 basic cases
    assert(fabs(e(1, 0) - 1.0) < 1e-9);
    assert(fabs(e(1, 1) - 2.0) < 1e-9);

    // increasing accuracy
    assert(fabs(e(1, 5) - 2.716666666666666) < 1e-9);
    assert(fabs(e(1, 10) - 2.718281801146384) < 1e-9);
    assert(fabs(e(1, 15) - 2.718281828459045) < 1e-6);

    // x = 0 → e^0 = 1
    assert(fabs(e(0, 10) - 1.0) < 1e-9);

    // x = 2 → e^2
    assert(fabs(e(2, 10) - 7.388994708994708) < 1e-9);
    assert(fabs(e(2, 15) - 7.38905609893065) < 1e-6);

    // negative x
    assert(fabs(e(-1, 10) - 0.3678791887125221) < 1e-6);

    printf("\ntaylor_series passed the series\n");

    return 0;
}
