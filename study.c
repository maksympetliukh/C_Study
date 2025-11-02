/* Preprocessor Directives Pt.2 */

#include <stdio.h>
#include <stdlib.h>

#ifndef IBM
#define IBM
#endif

#undef IBM
int main(int argc, char* argv[]) {
#if !defined(IBM)
//#error IBM not found
#warning IBM not defined
    #endif
    printf("IBM was found\n");

    printf("Line: %d\tFile: %s\n", __LINE__, __FILE__);

//#line 1000 "file_1000.c"
    //printf("Line: %d\tFile: %s\n", __LINE__, __FILE__);

    return EXIT_SUCCESS;
}