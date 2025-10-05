/*Operators and Operands*/
#include <stdio.h>

int main(){
#pragma region Variable initialization, assignment operator-------------------------------------------------------

    int a0 = 1;
    printf("a0 = %d\n", a0);

    int a1 = 'A';
    printf("a1 = %d\n", a1);

    char a2 = 'A';
    printf("a2 = %c\n", a2);

    int a3 = 0101;
    printf("a3 = %d\n", a3);

    int a4 = 0b01000001;
    printf("a4 = %d\n", a4);

    int a5 = 0x41;
    printf("a5 = %d\n", a5);

    int a6 = -(-5);//- - 5 incorrect

    int a8 = (a0 + 14)/3;
    printf("a8 = %d\n", a8);

    int a9 = (1, 2, 3);
    printf("a9 = %d\n", a9);
    
#pragma endregion Variable initialization, assignment operator-------------------------------------------------------

    return 0;
}