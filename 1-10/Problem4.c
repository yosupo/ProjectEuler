#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

bool isPalindromic(ulong x);

int main(int argc, const char * argv[]) {
    ulong result = 0;
    ulong i, j, x;
    for (i = 999; i > 99; i--) {
        for (j = 999; j > 99; j--) {
            x = i * j;
            if (x < result) {
                break;
            }
            if (isPalindromic(x)) {
                result = x;
            }
        }
    }
    printf("%ld", result);
    return 0;
}

bool isPalindromic(ulong x) {
    char xBase10[6] = {0}; //1000 * 1000 = 1000000 <-7keta!!!
    ulong i = 0, j;
    while (x) {
        xBase10[i] = x % 10;
        x /= 10;
        i++;
    }
    for (j = 0; j < i / 2; j++) {
        if (xBase10[i - 1 - j] != xBase10[j]) {
            return false;
        }
    }
    return true;
}