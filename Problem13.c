#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <gmp.h>

typedef unsigned long ulong;

char judge();
void get_num(char result[]);
mpz_t x, y;
ulong len_b;
int main(int argc, const char * argv[]) {
    mpz_t num, x;
    mpz_init_set_ui(num, 0);
    mpz_init(x);
    
    ulong i;
    char j[52];
    for (i = 0; i < 100; i++) {
        scanf("%s", j);
        mpz_set_str(x, j, 10);
        mpz_add(num, num, x);
    }
    gmp_printf("\n\n%Zd\n\n", num);
    return 0;
}