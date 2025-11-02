/* Arrays of Pointers to functions */

#include <stdio.h>
#include <stdlib.h>

void func0(){printf("Function 0\n");}
void func1(){printf("Function 1\n");}
void func2(){printf("Function 2\n");}

void(*p[])() = {func0,func1,func2};

int sum(int x, int y){printf("Sum = %d\n", x + y); return x + y;}
int multiply(int x, int y){printf("Multiply = %d\n", x * y); return x * y;}

double glob_data = 0;



double* (*(*(*p2[5])(double* ))[3])(int*, int* );
double* outer_func(int* a, int* b) {
    double* pDouble = &glob_data;
    *pDouble += *a + *b;
    printf("Outer function = %f\n", glob_data);
    return pDouble;
}

typedef  double* (*p_outer_func)(int* a, int* b);//double*(*)(int*, int*)

p_outer_func arr[3] = {outer_func, outer_func, outer_func};

p_outer_func* inner_func(double* a){p_outer_func arr1 = arr; return arr1;}

typedef p_outer_func* (*p_inner_func)(double* a);//p_outer_func* (*)(double* a);
p_inner_func arr2[3] = {inner_func, inner_func, inner_func};



int main(int argc, char* argv[]) {
    p[0]();
    p[1]();
    p[2]();

    for (int i = 0; i < 3; i++){p[i]();}

    int(*p1[])(int x, int y) = {sum,multiply};
    for (int i = 0; i < 2; i++){p1[i](10, 4);}

    int x = 5, y = 7;
    (*arr[0])(&x, &y);
    (*arr[1])(&x, &y);
    (*arr[2])(&x, &y);

    (*(*arr2[1])(&glob_data)[0])(&x, &y);

    return EXIT_SUCCESS;
}