#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong result;
    ulong prime[10001], num = 0;
    ulong i = 2, j;
    while (num < 10001) {
        for (j = 0; j < num; j++) {
            if (i % prime[j] == 0) break;
        }
        if (j == num) {
            prime[num] = i;
            num++;
        }
        i++;
    }
    result = prime[10000];
    printf("%ld", result);
    return 0;
}