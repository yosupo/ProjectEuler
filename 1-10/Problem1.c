#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong result = 0;
    for (ulong i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    printf("%ld", result);
    return 0;
}

