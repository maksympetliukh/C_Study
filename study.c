/*Constants*/

#include <stdio.h>
#include <uchar.h>
#include <wchar.h>

#define GRAVITY 9.8f
#define PI 3.141592
#define LONG_DOUBLE 34.1234567890987654321L

int main(){

    printf("Gravity = %.1f\n",GRAVITY);

#pragma region Literals Integer------------------------------------------
    int a = 10;
    printf("a = %d\n", a);

    a = 5;
    printf("new a = %d\n", a);

    const int b = 3;
    printf("Const b = %d\n", b);

    //b = 5;//error, const cannot be rewrited
    //printf("New const b = %d\n", b);

    a = 16;
    int c = a;
    //c = a;   //
    //a = 17; //incorrect
    printf("c = %d\n", c);

    int d = b;
    printf("d = %d\n", d);

    int e = 5;
    //5 = e;//incorrect

    short s_var = 5;
    long i_var = 4;//equal to long int or int
    long long int ll_var = 5LL;//5ll
    unsigned int uint_var = 4U;//4u
    unsigned long int ulint = 3UL;//3lu, 3ul

    int x_var = 0x7A;
    unsigned int u_var = 0xFEE;
    unsigned long int ul_xvar = 0x2DUL;

    int oct_var = 0127;
    unsigned int u_oct_var = 0127U;
    unsigned long int ul_oct_var = 0127UL;

    int bi_var = 0b01010111;
    unsigned int u_bi_var = 0b01010111U;
    unsigned long int ul_bi_var = 0b01010111UL;
    unsigned long long int ull_bi_var = 0b01010111ULL;

#pragma endregion Literal Integers---------------------------------------

#pragma region float------------------------------------------------------

    float f_var0 = 3.14f;
    float f_var1 = 3.f;
    float f_var2 = .14f;

    double f_var3 = 3.14;

    float f_var4 = 3.14e+10f;
    double f_var5 = 3.14e+10;
    long double f_var6 = 3.14e+10L;

    //float err1 = e+10f;
    //float err2 = 3.14+10;
    //float err3 = 3.14e;
    //float err4 = 14ef;

#pragma endregion float---------------------------------------------------

    typedef char sbyte;
#pragma region char-------------------------------------------------------

    size_t st_var = 5;
    printf("Size of st_var = %zd bytes\n", sizeof(st_var));

    sbyte sb_var = 'A';
    printf("Size of sb_var %zu byte\n", sizeof(sb_var));

    sbyte var0 = 'B';
    wchar_t var1 = 'B';
    
    char16_t var2 = 'C';
    char32_t var3 = U'C';

    char var4 = '\n';
    printf("Hello%cWorld\n", var4);
    printf("\x06\n");

#pragma endregion char----------------------------------------------------

    return 0;
}