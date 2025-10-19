/* Pointers and 1D arrays */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr0[3] = {5, 9, 7};
    printf("Address of arr0 is %p\n", &arr0);

    int x = 0;

    int* p0 = arr0;
    //int* p0 = &arr0;//Expression of type 'int(*)[3]' is implicitly converted to incompatible pointer type 'int*'

    int* p_element = &arr0[1];//correct
    //int* p_element = arr0[1];//incorrect

    printf("Size of arr0 = %lld bytes\n", sizeof(arr0));
    printf("Size of p0 = %lld bytes\n", sizeof(p0));

    x = p0[2];//value at target element
    printf("x(p0) = %d\n", x);

    x = arr0[2];// same x = *(arr0 + 2);//2[arr0]

    x = *(p0 + 1);
    printf("x = %d\n", x);
    printf("Address of arr0[1] = %p\n", (p0 + 1));

    return 0;
}