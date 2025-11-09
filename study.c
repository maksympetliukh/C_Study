/* _Generic */

#include <stdio.h>
#include <stdlib.h>

#define GetType(T) _Generic((T), int: "Integer", double: "Double", default: "Unknown")

void print_int(int x){printf("x = %d\n", x);}
void print_double(double x){printf("x = %lf\n", x);}
#define GET(x) _Generic((x), int: print_int, double: print_double, default: "Unknown")(x)

void int_add(int x, int y){printf("int result = %d\n", x + y);}
void double_add(double x, double y){printf("Double result = %lf\n", x + y);}
void string_add(char* x, char* y){printf("String result = %s %s\n", x, y);}
void char_add(char x, char y){printf("Char result = %c%c\n", x, y);}
#define GENERIC_ADD(x,y) _Generic((x), int:int_add, double:double_add, char*: string_add, char: char_add, default: "Unknown")(x,y)

int main(int argc, char *argv[]) {
    printf("%s\n",_Generic(25, int: "integer", char: "character", default: "unknown"));

    printf("%s\n", GetType(3));
    printf("%s\n", GetType(3.1415));

    GET(5);
    GET(5.128);

    GENERIC_ADD(5.1, 5.2);
    GENERIC_ADD(7, 16);
    GENERIC_ADD("Hello", "World");
    GENERIC_ADD((char)'A', (char)66);

    return EXIT_SUCCESS;
}