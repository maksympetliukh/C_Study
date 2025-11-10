/* Nested Structures */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
}nested;

struct outer{
    int x;
    int y;
    nested n1;//nested structure as field of outer structure
    struct outer* ptr_outer;//pointer to same type structure or itself
};

struct new_outer {
    char ch;
    struct {int var0; int var1;};//embedded anonymous structure
    //struct {int var0, int var1;};//error, impossible to create same anonymous nested structure
    struct {int var2; int var3;}new_nested;//also anonymous structure with alias
};
int main(int argc, char *argv[]) {
    struct outer outer_1 = {5, 6, {7, 8}, .ptr_outer = &outer_1};
    struct outer outer_2 = {.x = 10, .y = 20, .n1 = {.a = 11, .b = 12}, .ptr_outer = &outer_1};
    struct outer outer_3 = {.x = 100, .y = 52, .n1.a = 1, .n1.b = 22, .ptr_outer = &outer_2};

    printf("outer_1.n1.a = %d\n", outer_1.n1.a);

    outer_1.ptr_outer->n1.a = 990;//access for the nested element by pointer
    printf("outer_1.n1.a after changes by pointer = %d\n", outer_1.n1.a);

    printf("X = %d\nY = %d\nA = %d\nB = %d\n", outer_3.x, outer_3.y, outer_3.n1.a, outer_3.n1.b);
    printf("Address of ptr.outer 1 = %p\n", outer_1.ptr_outer);//shows address of outer_1
    printf("Address of ptr.outer 2 = %p\n", outer_2.ptr_outer);//shows address of outer_1
    printf("Address of ptr.outer 3 = %p\n", outer_3.ptr_outer);//shows address of outer_2

    struct new_outer new_o;
    new_o.new_nested.var2 = 16;//access to field of embedded (nested) structure

    return EXIT_SUCCESS;
}