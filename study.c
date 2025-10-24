/* Const and pointers */

#include <stdio.h>

int main() {
    int v0 = 5;
    printf("v0 = %d\n", v0);

    v0 = 20;
    printf("new v0 = %d\n", v0);

    const int v1 = 10;
    printf("const v1 = %d\n", v1);

    //v1 = 100;//error, const variable is read only!

    int const v2 = 15;//const qualifier can be placed at any position
    printf("const v2 = %d\n", v2);

    int* p;

    int* const p1 = &v0;//consists only one address!

    const int* p2 = &v1;//read-only pointer! Consists only constant address

    int const* p3 = &v2;//same

    const int* const p4 = &v1;//cannot change both address and value

    int const arr0[3];//array with 3 constant elements
    const int arr1[3];//same

    int const* arr2[4];// array with constant pointers
    const int arr3[4];//same

    int* const arr4[3];//array with constant elements, impossible to change address, but possible to change values at elements

    const int* const arr5[3];//impossible to change address and value

    return 0;
}