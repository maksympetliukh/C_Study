/* Pointers and arrays */

#include <stdio.h>

int main() {
    int int_arr[5] = {2, 5 ,0};
    char char_arr[3] = {'A', 'B', 'C'};

    int* int_ptr = int_arr;
    char* char_ptr = char_arr;

    printf("int_ptr: %d\n", *int_ptr);
    printf("Int_ptr address = %p\n", int_ptr);
    printf("char_ptr: %c\n", *char_ptr);
    printf("Char_ptr address = %p\n", char_ptr);

    return 0;
}