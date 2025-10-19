/* Operations with pointers */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* p = arr;
    printf("Array address is %p\n", p);

    int x = *p;
    printf("Value of x is %d\n", x);

    p += 1;
    printf("New Value in p is %d\n", *p);

    int y = *(p - 1);
    printf("Value of y is %d\n", y);

    int z = *(++p);
    printf("Value of z is %d\n", z);

    int w = *(--p);
    printf("Value of w is %d\n", w);

    int a = *(p++);
    printf("Value of a is %d\n", a);

    int b = *(p--);
    printf("Value of b is %d\n", b);

    int* p1 = &arr[1];
    int* p2 = &arr[2];

    if (p1 <= p2){printf("True\n");}else{printf("False\n");}
    if (p2 > p1){int c = *(--p2); printf("result = %d\n", c);}

    p = &arr[0];

    ptrdiff_t d = p2 - p;
    printf("Pointers difference d is %lld\n", d);

    //multiplication and division doesn't work with pointers!!!

    int* p3 = &arr[4];
    int e = ++*p3;
    printf("Value of e is %d\n", e);

    int f = *p3--;
    printf("Value of f is %d\n", f);
    printf("Current p3 = %d\n", *p3);

    int* arr1 = (int*)malloc(3 * sizeof(int));//create dynamic array with 3 elements, filled with trash values
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;

    arr1 = (int*)realloc(arr1, 5 * sizeof(int));//extend array size
    arr1[3] = 40;
    arr1[4] = 50;
    for (int i = 0; i < 5; i++) {printf("arr[%d] = %d\n", i, arr1[i]);}

    free(arr1);//free memory

    int* arr2 = (int*)calloc(5, sizeof(int));//create array with elements and set zero-value into every element
    for (int i = 0; i < 5; i++) {printf("arr2[%d] = %d\n", i, arr2[i]);}

    arr2[0] = 5;
    arr2[1] = 15;
    arr2[2] = 25;
    arr2[3] = 45;
    arr2[4] = 65;
    for (int i = 0; i < 5; i++) {printf("arr2[%d] = %d\n", i, arr2[i]);}

    free(arr2);

    return 0;
}