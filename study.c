/* 1D Array Pointers */

#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int (*p0)[3] = &arr;

    int x = 0;
    //x = *p0;//incorrect//int cannot be int[]
    //x = p0[1];//same

    x = p0[0][1];//double dereference **p0[1];
    printf("x = %d\n", x);

    x = (*p0)[0];
    printf("x = %d\n", x);

    x = **p0;//(*p0)[0];
    printf("x = %d\n", x);

    x = **p0 + 2;//x = 3;(*p0)[2]//*(*p0 + 2)//x = po[0][2]//
    printf("x = %d\n", x);

    x = *(p0[0] + 1);//x = 2// x = *( *(p0[0] + 0) + 1);
    printf("x = %d\n", x);

    return 0;
}