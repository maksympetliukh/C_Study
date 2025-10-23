/* Pointers Array */

#include <stdio.h>

int main() {
    int arr[3] = {21, 8, 7};

    int* parr[3] = {NULL};

    parr[0] = &arr[0];
    parr[1] = &arr[1];
    parr[2] = &arr[2];

    printf("pArr Address is %p\n", parr);
    printf("pArr 1 = %d\n", *parr[0]);
    printf("pArr 2 = %d\n", *parr[1]);
    printf("pArr 3 = %d\n", *parr[2]);

    char ch_arr[3] = {'C', 'B', 'A'};
    char* ch_parr[3] = {NULL};

    ch_parr[0] = &ch_arr[0];
    ch_parr[1] = &ch_arr[1];
    ch_parr[2] = &ch_arr[2];

    printf("ch_parr Address is %p\n", ch_arr);
    printf("ch_parr 1 = %d\n", *ch_parr[0]);
    printf("ch_parr 2 = %d\n", *ch_parr[1]);
    printf("ch_parr 3 = %d\n", *ch_parr[2]);

    printf("ch_parr 1 = %c\n", *ch_parr[0]);
    printf("ch_parr 2 = %c\n", *ch_parr[1]);
    printf("ch_parr 3 = %c\n", *ch_parr[2]);

    int arr1[3] = {1, 2, 3};
    int* arr1_ptr = arr1;

    for (int i = 0; i < 3; i++) {arr1_ptr[i] = arr1[i]; printf("arr1[%d] = %d\n", i, arr1_ptr[i]);}

    int x = 0;
    printf("Address of x = %p\n", &x);

    arr1_ptr[0] = x;
    printf("arr1[0] = %d\n", arr1_ptr[0]);
    printf("Address of arr1_ptr is %p\n", &arr1_ptr);

    return 0;
}