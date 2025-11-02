/*Variative Functions */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int arg_count, ...) {
    int temp = 0;
    va_list arg_ptr;
    va_start(arg_ptr, arg_count);
    for (int i = 0; i < arg_count; i++) {temp += va_arg(arg_ptr, int);}
    va_end(arg_ptr);
    return temp;
}

int main(int argc, char* argv[]) {
    int s = sum(3, 4, 5, 6);
    printf("%d\n", s);

    return EXIT_SUCCESS;
}