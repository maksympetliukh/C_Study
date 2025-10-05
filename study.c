/*Operators and Operands*/

#include <stdio.h>
#include <stdlib.h>

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

    int a9 = (1, 2, 3); // a9 = 3
    printf("a9 = %d\n", a9);

    int a10 = printf("Hello World\n");
    printf("%d\n", a10);

    //int a11 = "Hello";// incorrect

    int a12, a13 = 27, a14 = 4;

    a12 = a14 = a13 = 1;
    printf("a12 = %d\ta13 = %d\ta14 = %d\n", a12, a13, a14);

#pragma endregion Variable initialization, assignment operator-------------------------------------------------------

#pragma region Arithmetic Operators----------------------------------------------------------------------------------

    int var0 = 5 + 3 - 2;
    int var1 = var0 + 4;
    printf("var1 = %d\n", var1);

    int var2 = var0 * 2;
    printf("var2 = %d\n", var2);

    int var3 = var2 / 10;
    printf("var3 = %d\n", var3);

    int var4 = var2 % 10;
    printf("var4 = %d\n", var4);

    unsigned long int var5 = 2000000000 + 1000000000;
    printf("var5 = %lu\n", var5);

#pragma endregion----------------------------------------------------------------------------------------------------

return 0;
}
