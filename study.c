/* Value Reference */

#include <stdio.h>

void swap_function(int* x, int* y) {int z = *x; *x = *y; *y = z; }

int main (){
    int a = 5, b = 6, c = 0;
    printf("A = %d\tB = %d\n", a, b);
    swap_function(&a, &b);

    printf("A = %d\tB = %d\n", a, b);

    return 0;
}