/*Ternary operator*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 0;
    int c = 1;

    int d = b ? a : c;
    printf("d = %d\n", d);

    int e = (a < c) ? b != 0 : c;
    printf("e = %d\n", e);

    int f = 0 ? a > b : 0;
    printf("f = %d\n", f);

    int g = (b >= 0) ? (printf("True")) : (printf("False"));


    return 0;
}
