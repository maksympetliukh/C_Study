/* Errors in work with pointers */

#include <stdio.h>
#include <stdlib.h>

int* func(){int var = 28; return &var;}
void func1(){int var = 10;}

int main(int argc, char *argv[]) {
    //1.Wild Pointer - declared but undefined pointer
    //int* ptr0;//garbage value on GCC
    //if (ptr0){printf("Value: %d\nAddress: %p\n", *ptr, ptr);}

    int* ptr0 = NULL;//correct declaration

    //2.Dangling pointer
    int* ptr1;
    {
        //int* ptr1;//declare pointer in block is correct action
        int d = 10;
        ptr1 = &d;
        printf("%d\n", *ptr1);
        printf("%p\n", ptr0);
    }
    printf("%d\n", *ptr1);
    printf("%p\n", ptr0);

    int *ptr2 = (int*)malloc(5 * sizeof(int));
    ptr2[0] = 1;
    ptr2[1] = 2;
    ptr2[2] = 3;
    ptr2[3] = 4;
    ptr2[4] = 5;

    for (int i = 0; i < 5; i++) {printf("%d\n", ptr2[i]);}//error - there is no NULL-checking

    free(ptr2);//error - this action makes memory locations available (free) for OS

    for (int i = 0; i < 5; i++) {printf("%d\n", ptr2[i]);}//error - garbage values

    int *ptr3 = func();
    func1();
    printf("%d\n", *ptr3);

    //3.Memory leak

    int a = 5;
    int *ptr4 = malloc(sizeof(int) * 5);//memory leak //int* const ptr4 - correct

    // .    .    . //some code

    ptr4 = &a;

    ptr4 = malloc(sizeof(int) * 5);//error memory reallocation
    free(ptr4);
    ptr4 =NULL;

    //4. Wrong size
    int *ptr5 = (int*)malloc(sizeof(short) * 5);

    //5.Try to access to NULL-pointer
    int *ptr6 = (int*)malloc(sizeof(short) * 20000000000);

    //6.Example exercise
    int* ptr7 = calloc(5, sizeof(int));
    if (ptr7 != NULL) {
        int* temp = realloc(ptr7, sizeof(int) * 2);
        if (temp == NULL) {
            free(ptr7);
            exit(1);
        }

        ptr7 = temp;
    }
    free(ptr7);
    ptr7 = NULL;

    return EXIT_SUCCESS;
}