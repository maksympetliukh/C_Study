/*Address of (&) */

#include <stdio.h>

int main() {
    int a = 5;
    int *ptr_a = &a;
    printf("Address of A: %p\n", &a);
    printf("A value: %d\n", *ptr_a);

    //printf("%p\n", &(a + a));//error, r-value
    //printf("%p\n", &(a + 1));//error, r-value

    //register int b = &a;//error, impossible to take address of register variable|
    //printf("%p", &'A');/error
    //printf("%p\n", &"Hello");//useless
    //printf("%p\n", &28);//error

    return 0;
}