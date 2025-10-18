/* Arrays */

#include <stdio.h>

#define ARRAY_SIZE 5
enum arr_size {small = 3, big = 10};

int main() {
    int arr0[ARRAY_SIZE];
    int arr1[5];
    int arr2[big];

    const int size = 6;
    //size = 7;//error!
    int arr3[size];

    int* ptr = &size;
    *ptr = 10;
    printf("Size: %d\n", size);

    //int arr_s = 5;
    //int arr4[arr_s] = {0, 1, 2, 3, 4};//incorrect

    int arr5[] = {1, 2, 3, 4, 5};//compiler will set array size automatically

    int arr6[5] = {};//compiler will fill every element with zero {0, 0, 0, 0, 0}
    printf("arr6[0] value = %d\n", arr6[0]);
    printf("arr6[1] value = %d\n", arr6[1]);
    printf("arr6[2] value = %d\n", arr6[2]);

    int arr7[small] = {};
    printf("Array Size: %lld bytes\n", sizeof(arr7) / sizeof(arr7[0]));//sizeof(array) / sizeof(type)

    int arr8[big] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < big; i++) {printf("Arr8[%d] = %d\n", i, arr8[i]);}
    arr8[0] = 15;//*(arr0 + 1)
    arr8[1] = 16;
    arr8[2] = 17;
    arr8[3] = 18;
    arr8[4] = 19;
    arr8[5] = 20;
    arr8[6] = 21;
    arr8[7] = 22;
    arr8[8] = 23;
    arr8[9] = 24;
    for (int i = 0; i < big; i++) {printf("arr8[%d] = %d\n", i, arr8[i]);}

    int a = 0;
    a = arr8[2];
    printf("a = %d\n", a);

    a = arr8[0] + arr8[1];
    printf("a = %d\n", a);

    a -= arr8[6];
    printf("a = %d\n", a);

    a &= ~(1 << 1);
    printf("a = %d\n", a);

    return 0;
}