#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong i, j, k;
    for (i = 1; i < 500; i++) {
        for (j = i; j + i < 1000; j++) {
            k = 1000 - j - i;
            if (i * i + j * j == k * k) {
                printf("%ld", i*j*k);
                return 0;
            }
        }
    }
    return 0;
}

