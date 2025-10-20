/* 2D array pointers */

#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};

    int(*p1D)[3] = &arr;//1D array pointer

    int x = p1D[0][2];
    printf("x = %d\n", x);

    x = *(p1D[0] + 1);
    printf("x = %d\n", x);


    x = (*(p1D + 0))[1];
    printf("x = %d\n", x);

    int arr2D[1][3] = {{2, 4, 6}};
    int(*p2D)[1][3] = &arr2D;
    int y = p2D[0][0][1];
    printf("y = %d\n", y);

    y = *(p2D[0][0] + 2);
    printf("y = %d\n", y);

    y = *(( *(p2D[0]) + 0) + 2);
    printf("y = %d\n", y);

    y = *((*(*p2D + 0) + 0) + 1);
    printf("y = %d\n", y);

    return 0;
}