#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong result = 100 * 101 / 2;
    result *= result;
    for (ulong i = 1; i <= 100; i++) {
        result -= i * i;
    }
    printf("%ld", result);
    return 0;
}

