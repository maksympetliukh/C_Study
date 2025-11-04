/* Scope, linkage, storage duration, register, auto, extern, static */

#include <stdio.h>
#include <stdlib.h>
#include "exterfunc.h"

int a = 5;//global variable
int c = 7;//global, available to external translation units
static int d = 9;//global, available only in current translation unit, exists while program works

void print_a(){printf("A = %d\n", a);}

int main(int argc, char* argv[]) {
    print_a();//usual function
    external_print_a();//function, defined in another translation unit
    external_print_b();//function, defined in another translation unit

    extern int b;//external variable, declared in external translation unit
    printf("Extern int b = %d\n", b);

    int a = 9;//Local variable, exists only in current function and scope of this variable only main function and only after definition!!
    //main function  - it's a new namespace!

    int* const p_a = &a;//with pointer,  we can use local variable in another namespace
    printf("Local variable A = %d\n", a);

    {int a = 1000; printf("Local A = %d\n", a); printf("Pointer to A = %d\n", *p_a);}//new local namespace

    register int e = 15;//only local variable, exists while block or function works. Place the variable in processor's register but not in RAM

    auto int f = 50;//local variable, compiler automatically decides what time this variable will be existed
    //auto is basic storage class !

    get_static();//calling of external static function by getter (public) function

    return EXIT_SUCCESS;
}