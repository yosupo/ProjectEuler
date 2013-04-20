#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong result = 2;
    ulong i, j;
    for (i = 3; i <= 200 * 10000; i+= 2) {
        for (j = 3; j < i; j++) {
            if (i % j == 0 || j * j > i) break;
        }
        if (j * j > i) {
            result += i;
        }
    }
    printf("%ld", result);
    return 0;
}