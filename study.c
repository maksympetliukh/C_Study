/* Pointers */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch = 'A';
    int x = 28091798;
    double w = 3.14;
    int control_var = 777;

    int* p1;
    int* p2 = NULL;
    int* p3 = &x;
    //int* p4 = 22222;//incorrect

    int* p5 = p3;//record p3 valute into p5
    //int* p6 = (int)3.14;//incorrect

    int* p7 = (int*)malloc(sizeof(int) * 5);

    int var = 9;
    int* pVar = &var;
    int** ppVar = &pVar;
    int*** pppVar = &ppVar;

    int var1 = 21;
    int* pVar1 = NULL;
    int temp = 0;

    //pVar1 = var1;//incorrect on GCC
    pVar1 = &var1;

    *pVar1 = 10;
    //temp = pVar1;//incorrect on GCC
    temp = *pVar1;
    printf("temp = %d\n", temp);

    //temp = &pVar1;//incorrect

    int myVar = 21;
    printf("myVar = %d\n", myVar);
    printf("myvar address = %p\n", &myVar);

    int* ptr1 = &myVar;
    printf("ptr1 value = %d\n", *ptr1);
    printf("ptr1 address = %p\n", ptr1);

    int** ptr2 = &ptr1;
    printf("ptr2 value = %d\n", **ptr2);
    printf("ptr2 address = %p\n", ptr2);

    int*** ptr3 = &ptr2;
    printf("ptr3 value = %d\n", ***ptr3);
    printf("ptr3 address = %p\n", ptr3);

    int i_var = 10;
    double d_var = 3.14;

    void* p_var = &i_var;
    printf("p_var value = %d\n", *(int*)p_var);

    void* p_ptr = &d_var;
    printf("p_ptr value = %f\n", *(double*)p_ptr);

    p_var = &i_var;
    double* dpVar = p_var;
    printf("dpVar value = %d\n", *(int*)dpVar);

    return 0;
}
