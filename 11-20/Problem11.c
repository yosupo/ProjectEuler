#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong result, number[400];
    ulong i, j, k, buff1, buff2;
    for (i = 0; i < 400; i++) {
        scanf("%ld", &number[i]);
    }
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 16; j++) {
            buff1 = buff2 = 1;
            for (k = 0; k < 4; k++) {
                buff1 *= number[(j + k) * 20 + i]; // tate
                buff2 *= number[i * 20 + (j + k)]; // yoko
            }
            if (result < buff1) {
                result = buff1;
            }
            if (result < buff2) {
                result = buff2;
            }
        }
    }
    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j++) {
            buff1 = buff2 = 1;
            for (k = 0; k < 4; k++) {
                buff1 *= number[(i + k) * 20 + (j + k)]; // hidariue
                buff2 *= number[(i + k) * 20 + (j - k + 4)]; // migiue
            }
            if (result < buff1) {
                result = buff1;
            }
            if (result < buff2) {
                result = buff2;
            }
        }
    }
    printf("%ld\n", result);
    return 0;
}

