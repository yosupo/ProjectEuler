#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;
ulong isNumber(ulong x);
int main(int argc, const char * argv[]) {
    ulong result = 0;
    ulong i = 0;
    while (1) {
        i++;
        result += i;
        if (isNumber(result) > 500) {
            break;
        }
    }
    printf("%ld", result);
    return 0;
}

ulong isNumber(ulong x) {
    ulong i = 2, j, num = 1;
    while (x > 1) {
        j = 0;
        while (x % i == 0) {
            j++;
            x /= i;
        }
        num *= j + 1;
        i++;
    }
    return num;
}
