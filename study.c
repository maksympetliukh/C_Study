/*Operators and Operands*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
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

    //long long int a11 = "Hello World";// possible but incorrect
    long long int a11 = "Hello World";
    printf("a11 = %lld\n", a11);

    int a12, a13 = 27, a14 = 4;

    a12 = a14 = a13 = 1;
    printf("a12 = %d\ta13 = %d\ta14 = %d\n", a12, a13, a14);

    int a15 = -3;
    printf("a15 = %d\n", a15);

    int a16 = - - 5;
    printf("a16 = %d\n", a16);

    char a17 = 8;
    printf("a17 = %d\n", a17);
    printf("Size of a17 = %zu\n", sizeof(+a17));

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

    int b0 = 2000000000;
    int b1 = 2000000000;
    unsigned long int var5 = b0 +b1;
    printf("var5 = %lu\n", var5);// assembler extends registers to unsigned long int

    char ch0 = 127;

    short int sh0 = 290;

    int int_result = ch0 + sh0;
    printf("int_result = %d\n", int_result);//assembler allocates 32-bit registers for short and char types

    ch0 = CHAR_MAX;
    sh0 = SHRT_MAX;

    int_result = ch0 + sh0; //ch0: 127 sh0:32767
    printf("int_result = %d\n", int_result);

    signed long long int sll0 = LLONG_MAX;
    signed long long int sll1 = LLONG_MAX;

    signed long long int sll2 = sll0 + sll1;

    //0111111111111111111111111111111111111111111111111111111111111111
    //                               +
    //0111111111111111111111111111111111111111111111111111111111111111
    //                               =
    //1111111111111111111111111111111111111111111111111111111111111110 = -2


    printf("sll2 = %lld\n", sll2);//correct value
    printf("sll2 = %llu\n", sll2);

    unsigned long long int ull0 = ULLONG_MAX;
    unsigned long long int ull1 = ULLONG_MAX;
    unsigned long long int ull2 = ull0 + ull1;//integer type overflowed

    //1111111111111111111111111111111111111111111111111111111111111111
    //1111111111111111111111111111111111111111111111111111111111111111
    //1 1111111111111111111111111111111111111111111111111111111111111110

    printf("ull2 1 = %llu\n", ull2);
    printf("ull2 2 = %llu\n", 0b1111111111111111111111111111111111111111111111111111111111111110);

    float f_result = ull0 + ull1;//18446744073709551616.000000 - incorrect value
    printf("f_result = %f\n", f_result);

    int v0 = 5;
    int v1 = 2;

    printf("v0 / v1 = %d\n", v0/v1);//integer division doesn't leave a remainder, only whole parts
    printf("v0 %% v1 = %d\n", v0 % v1);

    float fv0 = 4.4f;
    float fv1 = 2.2f;
    printf("fv0 / fv1 = %.1f\n",fv0 / fv1);
    printf("fv0 / 0 = %.1f\n", fv0 / 0);//division by zero in float point type gives infinity

    printf("mixed types result = %.2f\n", 3.1415 / 2);//integer converts to double

#pragma endregion----------------------------------------------------------------------------------------------------

#pragma region Incrementing and Decrementing operations----------------------------------------------------------

    //int a = ++10; incorrect

    int a = 0;
    printf("++a = %d\n", ++a);//increase first by 1 then use

    int b = 5;
    printf("b++ = %d\n", b++);// Use first, then increase

    int c = 2;
    printf("--c = %d\n", --c);//Decrease first, then use

    int d = 3;
    printf("d-- = %d\n", d--);//Use first, then decrease

    int t0 = 5;
    int t1 = ++t0 + ++t0;//1)++t = 6, 2)++t = 7, 3) subtitution - t1 = 7 + 7 = 14
    printf("t1 = %d\n", t1);

    int t2 = ++t0 + ++t0 + t0++;//undefined behavior
    printf("t2 = %d\n", t2);

    int t3 = 4;
    int t4 = 5;
    int t5 = t3++ * --t4;// 4 * (5-1=4) = 16 and after c = 16 postincrement !!!//c = 16
    printf("t5 = %d\n", t5);

    int t6 = 4;
    t6 = t6++ + t6;//4 + 4 = 8, than t6 = 8+1, than t6 = 9
    printf("t6 = %d\n", t6);

    int t7 = 5;
    t7 = ++t7 == 6;//5 + 1 = 6, 6 == 6 - TRUE = 1
    printf("t7 = %d\n", t7);

    int t8 = t7++ == 2;//1 == 2 = FALSE = 0, t8 = 0
    printf("t8 = %d\n", t8);

    t8 = t8++; //undefined behavior
    t8 = ++t8;//t8 = 1 undefined behavior
    printf("t8 = %d\n", t8);

    //int t9 += 2;//incorrect

    int t10 = 5;
    t10 += 2;//t10 = t10 + 2
    printf("t10 = %d\n", t10);

    t10 -= 3;
    printf("t10 = %d\n", t10);

    t10 *= 2;
    printf("t10 = %d\n", t10);

    t10 /= 2;
    printf("t10 = %d\n", t10);

    t10 %= 2;
    printf("t10 = %d\n", t10);

#pragma endregion

    return 0;
}
