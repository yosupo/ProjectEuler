#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned long ulong;

int main(int argc, const char * argv[]) {
    ulong map[1000001] = {1, 1};
    ulong result, i, j, x, y = 0;
    for (i = 1; i <= 1000000; i++) {
        j = i;
        x = 0;
        while (j > 1000000 || !map[j]) {
            if (j % 2 == 0) {
                j /= 2;
            } else {
                j = j * 3 + 1; 
            }
            x++;
        }
        x += map[j];
        map[i] = x;
        if (y < x) {
            y = x;
            result = i;
        }
    }
    printf("%ld", result);
    return 0;
}

