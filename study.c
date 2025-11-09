/* Variable length arrays */

#include <stdio.h>
#include <stdlib.h>

    //Function for example 2
int vla_func(int arr_size, int vla[arr_size]) {
    int mid = 0;
    for (int i = 0; i < arr_size; i++) {
        vla[i] = i;
        printf("vla[%d] = %d\n", i, vla[i]);
        mid += vla[i];
    }
    mid = mid / arr_size;
    return mid;
}

    //Function for Example 3
int sum(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i + j;
        }
    }
    int temp = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp += arr[i][j];
        }
    }
    return temp;
}

int main(int argc, char *argv[]) {
    #pragma region Example 1
    int size0 = 0;

    printf("Enter size of array: ");
    scanf("%d", &size0);

    int array[size0];
    for (int i = 0; i < size0; i++) {array[i] = i; printf("array[%d] = %d\n", i, array[i]);}
#pragma endregion

#pragma region Example 2

    int size1 = 0;
    printf("Enter size of array: ");
    scanf("%d", &size1);

    int array1[size1];
    printf("Average value = %d", vla_func(size1, array1));
#pragma endregion

#pragma region Example 3

    int x = 0, y = 0;
    printf("Enter x, y: ");
    scanf("%d%d", &x, &y);

    int arr_2d[x][y];
    printf("sum = %d", sum(size1, x, arr_2d));

#pragma endregion
    return EXIT_SUCCESS;
}