/*Bitwise operation exercises*/

#include <stdio.h>

int main() {
    int a = 64;
    int b = 5;
    int c = -5;

    a >>= 1;
    printf("A after division by 2 = %d\n", a);

    a ^= b;
    b ^= a;
    a ^= b;
    printf("A after swap = %d\nB after swap = %d\n", a, b);

    if (b & 1){printf("B is odd\n");}else{printf("B is even\n");}

    if (a != 0 && (a & (a - 1)) == 0){printf("A is power of 2\n");}else{printf("A isn't power of 2\n");}

    if (b & (1 << 2)){printf("Target bit set\n");}else{printf("Target bit clear\n");}

    int bit_count = __builtin_popcount(a);
    printf("Number of set bits in A = %d\n", bit_count);

    int sign = (c >> 31) & 1;
    if (sign == 0){printf("C sign is '+'\n");}else{printf("C sing is '-'\n");}

    int lsb =b & -b;
    int index = 0;
    while ((lsb & 1) == 0){lsb >>= 1; index++;}
    printf("B least significant bit = %d\n", index);

    printf("Int max value = %d\n", ~(1 << 31));
    printf("Unsigned int max value = %u\n", ~0U);

    a |= (1  << 15);
    a &= ~(1 << 2);
    a ^= (1 << 0);
    printf("A after bit set/clear/invert = %d\n", a);

    a &= (a - 1);
    printf("A after LSB clear = %d\n", a);

    unsigned mask = (1u << 1) -1;
    unsigned result = b & mask;
    printf("B's LSB mask = %u\n", result);

    return 0;
}
