#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong x = 1, y = 2, result = 0;
    while (y < 400 * 10000) {
        if (y % 2 == 0) {
            result += y;
        }
        y += x;
        x = y - x;
    }
    printf("%ld", result);
    return 0;
}

