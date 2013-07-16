#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong n = 600851475143, x = 2, result;
    while (n != 1) {
        if (n % x == 0) {
            n /= x;
            result = x;
        } else {
            x++;
        }
    }
    printf("%ld", result);
    return 0;
}

