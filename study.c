/* Dynamic arrays */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 200000
#define ROWS 2
#define COLS 3

int main(int argc, char *argv[]) {
#pragma region Array_1D
    int array[ARRAY_SIZE];//static memory allocation on stack

    int* p_array = malloc(200000 * sizeof(int));//dynamic allocation on heap
    if (p_array != NULL) {
        for (int i = 0; i < 200000; i++) {
            p_array[i] = i;
        }
        printf("Allocation successful\n");
    }else {
        printf("Allocation failed\n");
        exit(EXIT_FAILURE);
    }
    free(p_array);
    p_array = NULL;

#pragma endregion

#pragma region Array_2D

    int (*ptr2D)[COLS] = (int(*)[COLS])malloc(sizeof(int) * ROWS * COLS);//24 bytes
    if (ptr2D != NULL) {
        printf("Size of 2D array is %lu bytes\n", sizeof(int) * ROWS * COLS);
        ptr2D[0][2] = 50;
        ptr2D[1][1] = 7;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                printf("%d ", ptr2D[i][j]);
            }
        }
    }else {
        printf("Allocation failed\n");
        exit(EXIT_FAILURE);
    }
    free(ptr2D);
    ptr2D = NULL;

    int rows = 5;
    int cols = 3;

    int(*ptr2D_2)[cols] = calloc(rows * cols, sizeof(int));
    if (ptr2D_2 != NULL) {
        printf("\nSize of ptr2D_2 array is %lu bytes\n", sizeof(int) * rows * cols);
        ptr2D_2[0][0] = 1;
        ptr2D_2[0][1] = 2;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", ptr2D_2[i][j]);
            }
        }
    }else {
        printf("Allocation failed\n");
        exit(EXIT_FAILURE);
    }
    free(ptr2D_2);
    ptr2D_2 = NULL;

    int** ptr2D_3 = NULL;
    int ptr_to_block = 2;
    int block_0 = 4;
    int block_1 = 6;

    ptr2D_3 = (int**)malloc(sizeof(int**) * ptr_to_block);//2-steps allocation
    if (ptr2D_3 != NULL) {
        printf("\nAllocation successful\n");
        printf("Size of ptr2D_3 is %lu bytes\n", sizeof(int**) * ptr_to_block);
        ptr2D_3[0]= NULL;
        ptr2D_3[0] = (int*)malloc(sizeof(int) * block_0);//allocation for the first block
        if (ptr2D_3[0] != NULL) {
            printf("Allocation for block_0 successful\n");
        }else {
            printf("Allocation for block_0 failed\n");
            exit(EXIT_FAILURE);
        }
        ptr2D_3[1] = NULL;
        ptr2D_3[1] = (int*)malloc(sizeof(int) * block_1);//allocation for the second block
        if (ptr2D_3[1] != NULL) {
            printf("Allocation for block_1 successful\n");
        }else {
            printf("Allocation for block_1 failed\n");
            exit(EXIT_FAILURE);
        }
    }else {
        printf("\nAllocation failed\n");
        exit(EXIT_FAILURE);
    }

    free(ptr2D_3[0]);
    ptr2D_3[0] = NULL;

    free(ptr2D_3[1]);
    ptr2D_3[1] = NULL;

    free(ptr2D_3);
    ptr2D_3 = NULL;

#pragma endregion

    return EXIT_SUCCESS;
}