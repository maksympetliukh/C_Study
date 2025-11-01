/* Preprocessor Directives */

#include <stdint.h>
#include <stdio.h> // <header_file> - compiler takes header from standard catalogs
#include <stdlib.h>
#include <string.h>
//#include "exterfunc.h"// "user_header" - compiler checks standard catalogs first, then it checks additional catalogs (compiler directory settings)

//#include "C:\header.h"//possible, but incorrect (and similar ways)

//#include "stdlib.h", #include <stdio.h>//possible but incorrect
#ifndef PI
#define PI 3.14159265 // constant variable
#define ARRAY {1, 2, 3}//array
#define CIRCLE_SQUARE(a) (PI * a * a)//function
#define GREETING "Hello, World"
#endif

#define PRICE 100

int main (int argc, char* argv[]) {
    printf("Pi = %f\n", PI);

    double crcl_sqr = CIRCLE_SQUARE(3);
    printf("Circle square = %f\n", crcl_sqr);

    int arr[]  = ARRAY;
    for (int i = 0; i < 3; i++){printf("element %d = %d\n", i, arr[i]);}

    char str[] = GREETING;
    printf("%s\n", str);

    printf("Current time: %s\nCurrent date: %s\n", __TIME__, __DATE__);//standard macros

#if PRICE == (10 * 10)
    printf("100\n");
#elif PRICE <= 0
        printf("0\");
#else printf("Incorrect\n");
#endif

    return EXIT_SUCCESS;
}