/*Structures and const, static, extern*/

#include <stdio.h>
#include <stdlib.h>
#include "extern_header.h"

static struct static_data {        //available only in current translation unit
    int a;
    int b;
}static_data = {1, 2};

struct s1 {
    const int v0;
    int v1;
};
int main(int argc, char *argv[]) {
    printf("Static A = %d\nStatic B = %d\n", static_data.a, static_data.b);

    printf("Extern X = %d\nExtern Y = %d\n", extern_data.x, extern_data.y);//compiler knows how to build this struct from extern_header.h

    //const_data.var0 = 1000;//error, impossible to change const data
    printf("Const var0 = %d\nConst var1 = %d\n", const_data.var0, const_data.var1);

    struct s1 s1 = {100, 12};

    //s1.v0 = 89;error
    s1.v1 = 78;
    printf("s1.v0 = %d\ns1.v1 = %d\n",s1.v0, s1.v1);

    return EXIT_SUCCESS;
}