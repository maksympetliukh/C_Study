/* Arrays as function arguments */

#include <stdio.h>
#include <stdlib.h>

int arr[5] = {7, 15, 2, 78, 9};

int func_arr1D(int arr[5]){printf("func_arr1D called\n");arr[3] = 777; return sizeof(arr);}//int func_arr1D(int* arr)
int func_ptr(int* p_arr){printf("func_ptr called\n"); p_arr[3] = 777;*(p_arr + 1) = 25; return sizeof(p_arr);}

int func_arr2D(int arr2d[][3]){arr2d[0][3] = 333; return sizeof(arr2d);}
int func_arr3D(int arr3d[][1][3]){arr3d[0][0][2] = 222; return sizeof(arr3d);}

int main(int argc, char* argv[]) {
    func_arr1D(arr);
    func_ptr(arr);

    printf("Size of arr = %zd bytes\n", sizeof(arr));
    printf("Size if arr in function = %d bytes\n", func_arr1D(arr));
    printf("Size if arr in pointer function = %d bytes\n", func_ptr(arr));

    int arr2D[2][3] = {{2, 3, 5}, {78, 11,35}};
    printf("Size of arr2D = %zd bytes\n", sizeof(arr2D));
    printf("Size of arr2D in function = %zd bytes\n", func_arr2D(arr2D));

        int arr3D[2][2][2] = {{{1, 2},{3, 4}}, {{5, 6}, {7, 8}}};
    printf("Size of arr3D = %zd bytes\n", sizeof(arr3D));
    printf("Size of arr3D in function = %zd bytes\n", func_arr3D(arr3D));

    return EXIT_SUCCESS;
}