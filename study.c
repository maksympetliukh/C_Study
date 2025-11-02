/* Preprocessor Directives Pt.3 */

#include <stdio.h>
#include <stdlib.h>

#define VERY_LONG_MACRO(a,b)\
    printf("Very long message %d, %d\n", a, b)\
    ;

#define ALSO_LONG_MACRO(x, y) printf(#x " and " #y, x, y)//convert parameters to string literals

#define JOIN_MACRO(a,b) printf("\n%d\n",a##b)

#define GENERIC_JOINT(a, b, c) printf("%s\n",#a "" #b "" #c)

#pragma once
#include "exterfunc.h"

int main(int argc, char* argv[]) {
#pragma region Variables---
    int a,b,c,d;
#pragma endregion

#pragma message("Message")

#pragma pack(16)

    struct Data {
        char ch;
        short x;
        int y;
    };

    printf("Structure size is %lld bytes\n", sizeof(struct Data));


    VERY_LONG_MACRO(2, 5);
    ALSO_LONG_MACRO(3, 6);
    JOIN_MACRO(3, 7);//37
    GENERIC_JOINT(10, PRO, XL);

    return EXIT_SUCCESS;
}
