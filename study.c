/* Dynamic memory allocation (Pt.1 Malloc) */

#include <stdio.h>
#include <stdlib.h>

void Temp(int x, int y){char arr[] = {28, 9, 2};int z = x + y;}

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 7;
    //static memory allocation

    Temp(a, b);//after Temp ends work, Temp will be deleted from stack, but garbage values of this function will stay saved on stack
    int* a_ptr = &a;
    int* b_ptr = &b;

    int c = *a_ptr + *b_ptr;

    char ch_arr[5] = {'a', 'b', 'c', 'd', 'e'};//also static memory allocation
    char* ch_ptr = (char*)malloc(1);

    printf("c = %d\n", c);

    int* p_element = (int*)malloc(sizeof(int) * 5);//malloc allocates non-initialized memory with garbage value
    printf("Address of the first memory location, allocated on heap for p_element is %p\n", &p_element);

    p_element[0] = 1;
    p_element[1] = 2;
    p_element[2] = 3;   //filling the memory locations, allocated in heap
    p_element[3] = 4;
    p_element[4] = 5;

    free(p_element);//makes current memory free fo OS but doesn't clear it

    short* p_short = (short*)malloc(sizeof(short) * 3);
    printf("Address of the first memory location, allocated on heap for p_short is %p\n", &p_short);

    int d = p_short[0];
    printf("Garbage value at first memory location, allocated on heap for p_short %d\n", d);

    free(p_short);

    char* pString = (char*)malloc(sizeof(char) * 5 + 1);// +1 for '\0'
    if (pString != NULL) {
        pString[0] = 'H';
        pString[1] = 'E';
        pString[2] = 'L';
        pString[3] = 'L';
        pString[4] = 'O';

        printf("%s\n", pString);
    }
    free(pString);

    return EXIT_SUCCESS;
}