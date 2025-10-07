/*Typecast*/

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
#pragma region Overflow-----------------------------------------------

    char ch0 = 127; //Implicit, Unsafe
    printf("ch0 = %d\n", ch0);

    ch0 = 128;
    printf("ch0 = %d\n", ch0);

    ch0 = 129;
    printf("ch0 = %d\n", ch0);//overflowing

    ch0 = 130;
    printf("ch0 = %d\n", ch0);//overflowing

    int i_var0 = 28;

    i_var0 = 2000000000;
    printf("i_var0 = %d\n", i_var0);

    int i_result = 2 * i_var0;//overflowing
    printf("i_result = %d\n", i_result);

    float f_var0 = FLT_MAX;

    float f_result = 2 * f_var0;
    printf("f_var0 = %f\n", f_var0);

    double d_var0 = DBL_MAX;
    double d_result = 2 * d_var0;
    printf("d_var0 = %lf\n", d_var0);

    f_var0 = 3.1415923456784f;
    printf("f_var0 = %.13f\n", f_var0);

    d_var0 = 3.1415923456784;
    printf("d_var0 = %.13f\n", d_var0);

    f_var0 = 28 + 78;//type conversion to float
    printf("f_var0 = %.2f\n", f_var0);

    d_var0 = 78 + 78;
    printf("d_var0 = %.2f\n", d_var0);

    i_var0 = 28.0/4.0;//type conversion to long int (int)//information waste//unsafe
    printf("i_var0 = %d\n", i_var0);

    //i_var0 = (int)28.0/4.0;//Implicit, unsafe typecasting

    i_var0 = (int)(28.0/4.0);//Explicit, unsafe typecasting
    printf("i_var0 = %d\n", i_var0);

    unsigned u_var0 = 28;
    unsigned u_var1 = 100;
    signed int si_var0 = u_var0 + u_var1;
    printf("si_var0 = %d\n", si_var0);

    u_var0 = 1000000000;
    u_var1 = 2000000000;
    unsigned u_result = u_var0 + u_var1;//overflowing
    printf("u_result = %d\n", u_result);

    char c_var0 = 65;
    short s_var0 = 78;
    int result = c_var0 + s_var0;
    printf("result = %d\n", result);//Implicit, safe

    char c_result = c_var0 + s_var0;//Implicit, unsafe
    printf("c_result = %d\n", c_result);

    long long result1 = c_var0 + s_var0 + 1978L + 2078LL;
    printf("result1 = %lld\n", result1);

    int i_var2 = 25 + 45uL;//Implicit, unsafe
    printf("i_var2 = %d\n", i_var2);

    char a = 10;
    short b = 100;
    int c = 50;
    float f = 1.2;
    double d = 2.5;

    int res = (int)((a + b)/f + c * d);//216,67 -> int = 216//data lost
    printf("res = %d\n", res);

#pragma endregion

}