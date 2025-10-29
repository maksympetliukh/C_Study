/* Inline, _Noreturn */

#include <stdio.h>
#include <stdlib.h>

static inline int func(int a, int b, int c, int d){return a+b+c+d;}

_Noreturn int func1(int a){exit(EXIT_SUCCESS);}

int main(int argc, char* argv[]) {

    func(1,2, 3,4);

    func1(1);
}