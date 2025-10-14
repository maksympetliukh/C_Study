/*Updated binary operations exercises*/
#include <stdio.h>

int main() {
    int a = 5;
    int b = 16;
    int c = -3;

    b >>= 1;
    printf("B after binary division by 2 = %d\n", b);

    a ^= b;
    b ^= a;
    a ^= b;
    printf("A after binary swapping = %d\nB after binary swapping = %d\n", a, b);

    if (a & 1){printf("A is odd\n");}else{printf("A is even\n");}

    if (a & (1 << 3)){printf("Target bit of A is set\n");}else{printf("Target bit of A is clear\n");}

    if (a != 0 && (a & (a - 1)) == 0) {printf("A is power of 2\n");}else{printf("A isn't power of 2\n");}

    int lsb = b & -b;
    int index = 0;
    while ((lsb & 1) == 0){lsb >>= 1; index++;}
    printf("LSB of B = %d\n", index);

    b &= (b - 1);
    printf("B after LSB clearing = %d\n", b);

    unsigned mask = a & (1u << 1) - 1;
    unsigned result = a & mask;
    printf("A after LSB-masking = %u\n", result);

    int sign = (c >>31) & 1;
    if (sign == 0){printf("C sign is '+'\n");}else{printf("C sign is '-'\n");}

    b |= (1 << 20);
    b &= ~(1 << 7);
    b ^= (1 << 0);
    printf("B after standart binary operations = %d\n", b);

    printf("Unsigned long int max value = %u\n", ~0UL);
    printf("Int max value = %d\n", ~(1 << 31));

    int x = a;
    int count = 0;
    while (x){x &= (x - 1);count++;}
    printf("Count of set bits in A = %d\n", count);

    return 0;
}
