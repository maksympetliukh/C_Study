/* 2D and 3D arrays */

#include <stdio.h>

int main() {
    int arr0[3][2] = {{1,2}, {3,4}, {5,6}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr0[%d][%d] = %d\n", i, j, arr0[i][j]);
        }
    }

    int arr1[2][2][2] = {{{0, 1}, {2, 3}}, {{4, 5}, {6, 7}}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr1[%d][%d][%d] = %d\n", i, j, k, arr1[i][j][k]);
            }
        }
    }


    int x = **arr0;
    printf("x=%d\n", x);

    x = *(*(arr0 + 1) + 1);//arr0[1][1]
    printf("x=%d\n", x);

    int y = ***arr1;
    printf("y=%d\n", y);

    y = *(arr1[1][1] + 1);
    printf("y=%d\n", y);

    y = *(*(arr1[1] + 0) + 1);//arr1[1][0][1]
    printf("y=%d\n", y);

    y = *( *( *(arr1 + 0) +1) + 1);//arr1[0][1][1]
    printf("y=%d\n", y);
    return 0;
}