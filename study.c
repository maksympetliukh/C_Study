/*Data types and printf*/

#include <stdio.h>
#include <limits.h>

int main(){
#pragma region unsigned char-------------------------------------------------------------

    unsigned char u_char_0 = 'A';
    printf("u_char_0 = %d\nu_char_0 = %c\nSize of unsigned char u_char_0: %zu byte\n",u_char_0, u_char_0, sizeof(u_char_0));

    unsigned char u_char_1 = -65; //10111111 (191)
    printf("u_char_1 = %d\nu_char_1 = %c\nSize of unsigned char u_char_1: %zu byte\n",u_char_1, u_char_1, sizeof(u_char_1));

    unsigned char u_char_2 = 67 + 1;
    printf("u_char_2 = %d\nu_char_2 = %c\n", u_char_2, u_char_2);

    unsigned char u_char_3 = 65 + ' ';
    printf("u_char_3 = %c\nu_char_3 = %d\n",u_char_3, u_char_3);

    unsigned char u_char_4 = 'A' + ' ';
    printf("u_char_4 = %d\nu_char_4 = %c\n", u_char_4, u_char_4);

    unsigned char u_char_5 = u_char_2 + 31;
    printf("u_char_5 = %c\nu_char_5 = %d\n", u_char_5, u_char_5);

    unsigned char u_char_6 = {(u_char_2 - 1) + 1};//expression
    printf("u_char_6 = %c\nu_char_6 = %d\n", u_char_6, u_char_6);

    unsigned char u_char_7 = 0b01000001;
    printf("u_char_7 = %c\nu_char_7 = %d\n", u_char_7, u_char_7);

    unsigned char u_char_8 = 0101;
    printf("u_char_8 = %c\nu_char_8 = %d\n", u_char_8, u_char_8);

    unsigned char u_char_9 = 0x41;
    printf("u_char_9 = %c\nu_char_9 = %d\n", u_char_9, u_char_9);


    //unsigned char u_char_10 = {'65'}//incorrect
    //unsigned char u_char_11 = '65';//incorrect
    //unsigned char u_char_12 = "A";//incorrect
    //unsigned char u_char_13 = "ABC" {'A', 'B', 'C', '\0'}//incorrect

    printf("Maximal value of unsigned char: %d\n", UCHAR_MAX);//minimal value - 0

    printf("Octal u_char_2 = %#o\n", u_char_2);
    printf("Hexidecimal u_char_2 = %#x\n", u_char_2);//%# - format flag



#pragma endregion unsigned char----------------------------------------------------------
    
#pragma region signed char----------------------------------------------------------------------

printf("Minimal value of signed char = %d\n", SCHAR_MIN);
printf("Maximal value of signed char = %d\n", SCHAR_MAX);

signed char s_char_0 = -650;//incorrect
printf("s_char_0 = %c\ns_char_0 = %d\n",s_char_0, s_char_0);

signed char s_char_1 = 3.14;//incorrect
printf("s_char_1 = %c\ns_char_1 = %d\n", s_char_1, s_char_1);

signed char s_char_2 = 72;
printf("s_char_2 = %d\ns_char_2 = %c\n", s_char_2, s_char_2);

signed char s_char_3 = -72;
printf("s_char_3 = %d\ns_char_3 = %c\n", s_char_3, s_char_3);

#pragma endregion signed char-------------------------------------------------------------------
    
#pragma region char--------------------------------------------------------------------------

printf("Minimal value of char = %d\n", CHAR_MIN);
printf("Maximal value of char = %d\n", CHAR_MAX);

char char_0 = 68;
printf("char_0 = %c\nchar_0 = %d\n", char_0, char_0);

char char_1 = 'G';
printf("char_1 = %c\nchar_1 = %d\n", char_1, char_1);

//char char_2 = -28;//incorrect, depends on the compiler

#pragma endregion char---------------------------------------------------------------------
   
#pragma region int----------------------------------------------------------------------------

printf("Minimal short int value = %d\n", SHRT_MIN);
printf("Maximal short int value = %d\n", SHRT_MAX);
printf("Minimal int value = %d\n", INT_MIN);
printf("Maximal int value = %d\n", INT_MAX);
printf("Minimal long int value = %ld\n", LONG_MIN);
printf("Maximal long int value = %ld\n", LONG_MAX);
printf("Minimal long long int value = %lld\n", LLONG_MIN);
printf("Maximal long long int value = %lld\n", LLONG_MAX);
printf("Maximal unsigned short int %d\n", USHRT_MAX);
printf("Maximal unsigned long long int %d\n", ULLONG_MAX);



//signed short int
//singned short          16 bits 2 bytes - all variants are equal
//        short

//unsigned  short int                      same situation
//unsigned short

//signed long int        
//signed long            32 bits 4 bytes
//       long
//            int

//unsigned long int
//unsigned long          32 bits 4 bytes
//unsigned      int  

//signed long long int
//signed long long       64 bits 8 bytes
//       long long
//       long long int

//unsigned long long int
//unsigned long long     64 bits 8 bytes

printf("Size of signed short int %zd bytes\n", sizeof(signed short int));
printf("Size of unsigned short int %zu bytes\n", sizeof(unsigned short int));
printf("Size of signed long int %zd bytes\n", sizeof(signed long int));
printf("Size of unsigned long int %zu bytes\n", sizeof(unsigned long int));
printf("Size of signed long long int %zd bytes\n", sizeof(signed long long int));
printf("Size of unsigned long long int %zu bytes\n", sizeof(unsigned long long int));

#pragma endregion int--------------------------------------------------------------------------------------

return 0;
}