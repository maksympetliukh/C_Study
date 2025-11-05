/* Memory organization */

#include <stdio.h>
#include <stdlib.h>
#include "exterfunc.h"

extern int extern_variable;//memory allocated in external file

const int global_const = 0x1C;//data segment read-only

int global_int = 1;//data segment read-write
int global_un_int;//BSS
static int static_var = 0;//data segment read-write
static int static_un_int;//BSS

int global_arr[5] = { 1, 2, 3, 4 };//read-write
char ch_arr[] = "Hello World";//read-write

char* ch_ptr = "Hello World";//read-write
int* ptr_global;//BSS
int* ptr_global_init = NULL;//read-write

int func0(int x) {                   //stack
    static int count = 0;//read-write
    static int static_un_init;//BSS
    int y = 0;//stack
    return x + y;//return on stack
}

int main(int argc, char* argv[]) {
    int local_var = 9;//stack
    const int local_const = 21;//stack
    int* ptr;//stack
    int arr[5] = { 1, 2, 3, 4 };//stack
    char ch_string[] = "Hello World";//stack
    char* c_ptr = "Hello World";//stack

    int* ptr_heap;//stack
    ptr_heap = malloc(sizeof(int) * 5);//heap

    func0(9);//stack

    return  EXIT_SUCCESS;
}