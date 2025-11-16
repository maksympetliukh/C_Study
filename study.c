/*Bit fields*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    char a : 4; //a.0000 0000 or 0000 0000.a
}example;

typedef struct {
    unsigned char x : 4; //a.0000 b.0000
    unsigned char y : 4;
}new_example;

typedef struct {
    char a : 4; //(a.0000)0000 (b.000000)00
    char b : 6;
}BF0;

typedef struct {
    int var0 : 4; //(a.0000)0000 00000000 00000000 00000000
}BF1;

typedef struct {
    int a : 4; //a.0000 (b.0000)0000000000000000000000000000
    int b : 4; //or a.0000 (b.0000)0000 00000000 00000000 00000000
}BF2;

typedef struct {
    int x : 4; //a.0000 (b.0000 00)000000 00000000 00000000
    int y : 6; //or (a.0000)0000 (b.000000)00 000000000000000000000000
}BF3;

typedef struct {
    int a : 17; //(a.00000000000000000) 000000000000000
    int b : 17; //(b.00000000000000000) 000000000000000
}BF4;

typedef struct {
    int a : 17;// (a.00000000 00000000 0)0000000 00000000
    char b : 7;// (b.000000)0 000000000 00000000 00000000
}BF5;

#pragma pack(1)
typedef struct {
    int a : 17;//(a.00000000 00000000 0) (b.0000000 00000000) (c.0000000)0
    int b : 15;
    char c : 7;
}BF6;

typedef struct {
    char a : 4;//(+-)a.0000//one bit for sign
    unsigned char b : 4;//(+)b.0000
}BF7;

/*Error!!! Bit field can only be integer type
typedef struct {
    int a : 8;
    double d : 5;
}error;*/

typedef struct {
    u_char a : 8;
    u_char b : 8;
    struct{
        u_char x : 8;
        u_char y : 8;
    }nested;
}BF_PARENT;

typedef struct {
    uint32_t a : 4; //a.0000 b.0000 c.0000 d.0000 e.0000 f.0000 g.0000 h.0000
    uint32_t b : 4; //Size of BF8 - 4 bytes
    uint32_t c : 4;
    uint32_t d : 4;
    uint32_t e : 4;
    uint32_t f : 4;
    uint32_t g : 4;
    uint32_t h : 4;
}BF8;

union BF_UNI {
    int i : 4;
    double d;
    //double d8 : 8; - error for gcc!!!
};

int main(void) {
    example ex0 = {15};
    example ex1 = {.a = 15};
    example ex2 = {0b00001111};
    example ex3 = {0b1111};
    example ex4 = {0xF};

    new_example new_ex0 = {.x = 0x00000001, .y = 10};

    BF0 bf0 = {.a = 0b0001, .b = 0b00111111};

    new_example* ptr_example = &new_ex0; //&new_ex0.x -error
    ptr_example->x = 9;
    ptr_example->y = 11;
    printf("x = %d\ny = %d\n", ptr_example->x, ptr_example->y);

    BF_PARENT bf_p0;
    bf_p0.nested.x = 1;//access to nested structure field bf_p0.nested.x = 0b00000001

    printf("Size of BF8 is %zu bytes\n", sizeof(BF8));//4 bytes

    return EXIT_SUCCESS;
}