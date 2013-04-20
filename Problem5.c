#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

ulong lcm(ulong x, ulong y);

int main(int argc, const char * argv[]) {
    ulong result = 1;
    for (ulong i = 1; i <= 20; i++) {
        result = lcm(result, i);
    }
    printf("%ld", result);
    return 0;
}

ulong gcd(ulong x, ulong y) {
    if (y) {
        return gcd(y, x % y);
    } else {
        return x;
    }
}

ulong lcm(ulong x, ulong y) {
    return x * y / gcd(x, y);
}
