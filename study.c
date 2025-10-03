/*Float, double*/

#include <stdio.h>
#include <float.h>

int main(){
#pragma region float--------------------------------------------------------------------

    //float 4 bytes 32 bits 0 000000000 00000000000000000000000
    //                      s    exp           mantis

    printf("Minimal float value = %f\n", FLT_MIN);
    printf("Maximal float value = %f\n", FLT_MAX);

    printf("Minimal float value = %10e\n", FLT_MIN);
    printf("Maximal float value = %10e\n", FLT_MAX);

    float float_0 = 2.0f;           //    
    float float_1 = 2.f;           //correct 
    float float_2 = .2f;
    float float_4 = 2;          //

    //float float_3 = 2f//incorrect

    float float_5 = 1.9872809e+3f;
    float float_6 = 10.1234567897f;
    float float_7 = 3.1234567897f;

    printf("float_6 = %.10f\n", float_6);
    printf("float_7 = %.3f\n", float_7);
    printf("float_5 = %.13f\n", float_5);

    printf("Sum of floats = %.15f\n", float_6 + float_7);

    printf("Sum of floats = %.15e\n", float_6 + float_7);
    printf("Sum of floats = %.15E\n", float_6 + float_7);

    printf("Float size =  %zu bytes\n", sizeof(float));
    

#pragma endregion float-----------------------------------------------------------------

#pragma region double-------------------------------------------------------------------

//double 8 bytes 64 bits 0 00000000000 0000000000000000000000000000000000000000000000000000 
//                       s     exp                         mantis

double  double_0 = 3.14;     //
double double_1 = .14;      //correct
double double_2 = 3.;      //

double double_3 = 3.14E-2;  //also correct

float double_4 = 8.1234567895553;        //compiler will transform it to float

double double_5 = 10.1234567895553;
double double_6 = 1.1111111832153;

printf("double_4 = %.15f\n", double_4);
printf("double_5 = %.15f\n", double_5);
printf("double_6 = %.15f\n", double_6);

printf("Minimal double value %f\n", DBL_MIN);
printf("Maximal double value %f\n", DBL_MAX);
printf("Maximal double value %10e\n", DBL_MAX);
printf("Size of double = %zu\n", sizeof(double));

#pragma endregion double--------------------------------------------------------------------

#pragma region long double------------------------------------------------------------------

    printf("Size of long double on GCC = %zu bytes\n", sizeof(long double));
    printf("Minimal long double value = %Lf\n", LDBL_MIN);
    printf("Maximal long double value = %Lf\n", LDBL_MAX);

    long double ld_0 = 2.0L;  //
    long double ld_1 = .0L;  //correct
    long double ld_2 = 2.L; //

    long double ld_3 = 3.12345678909876543211111;
    printf("ld_3 = %Le\n", ld_3);
    

#pragma endregion long double----------------------------------------------------------------
    return 0;
}