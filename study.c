/* Pointers to functions as function parameters or(and) returned values */

#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b){return a+b;}
int Mul(int a, int b){return a*b;}

int (*generic)(int, int) = NULL;

int GenericMath(int(*gen)(int, int), int x, int y){return gen(x, y);}

typedef int (*math_generic)(int, int);
int GenericMath_t(math_generic gen, int x, int y) {
    int res = gen(x, y);
    printf("Result: %d\n", res);
    return res;
};

int (*var1(char ch))(int, int){
    switch (ch) {
        case 1: return Sum; break;
        case 2: return Mul; break;
        default: return NULL; break;
    }

}

int main(int argc, char* argv[]) {
    printf("Sum = %d\n", GenericMath(Sum,5,7));
    printf("Mul = %d\n", GenericMath(Mul,5,7));

    GenericMath_t(Sum,5,7);
    GenericMath_t(Mul,5,7);
    printf("Var1 = %d\n",var1(1)(2, 4));
    printf("Var1 = %d\n",var1(2)(2, 4));

    return EXIT_SUCCESS;
}