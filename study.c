/*Type qualifiers: volatile, restrict, _Atomic*/

#include <stdio.h>
#include <stdlib.h>

volatile int var = 28;/*volatile tells the compiler that the variable's value can be modified (overwritten)
                      by another program, task or hardware and the compiler doesn't optimize its accesses.
                      The compiler must fetch the value from memory every ti it's referenced*/
int main(void) {
    //restrict
    int* restrict a = malloc(sizeof(a) * 5);//restrict "allows" the compiler to more "aggressive" optimization for
    a[1] = 4;                                   //current memory access
    printf("a = %d\n", a[1]);
    a[1] += 6;
    printf("a = %d\n", a[1]);
    free(a);
    a = NULL;

    //volatile
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
    printf("var = %d\n", var);

    const volatile int data = 0;
    while (data == 0){/*doing some work or waiting for changes in data*/}
    //The compiler takes value from register every time
    //Only the outer program or hardware can change the volatile value

    //_Atomic
    _Atomic int x = 10;
    //Until this expression is executed only one thread has access to atomic variable
    x += (x + 1);
    printf("x = %d\n", x);

    return EXIT_SUCCESS;
}