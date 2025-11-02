/* Pointers to functions */

#include <stdio.h>
#include <stdlib.h>

void greeting(void){printf("Hello World\n");}
int sum(int a, int b){return a+b;}

int main(int argc, char* argv[]) {
    void (*pFunc)(void) = &greeting;
    int (*pSum)(int, int) = &sum;

    pFunc();
    (*greeting)();
    (*pFunc)();

    printf("Result = %d\n", (*pSum)(10, 20));
    printf("Size of greeting is %lld bytes\n", sizeof(pFunc));

    return EXIT_SUCCESS;
}