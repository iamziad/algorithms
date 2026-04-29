#include "./factorial.h"
#include <assert.h>
#include <stdio.h>

int main() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    assert(factorial(8) == 40320);

    printf("\nfactorial passed all tests\n");

    return 0;
}
