/* Anonymous structures and typedef */

#include <stdio.h>
#include <stdlib.h>

struct data {
    char index;
    int ID;
};

struct data data0 = {'A', 1};

struct {         //available for actions, but impossible to create new anonymous structure without typedef
    char literal;
    int number;
} anon_struct0 = {'X', 20};

typedef struct {
    char ch;
    int i;
} anonymous;//now we can create new anonymous structures with alias, structure can have more than one alias

typedef struct new_struct {
    int a;
    int b;
} new_s1;//also alias for standard "struct new_student" type

typedef struct {//"unnamed" type
    int x;
    int y;
}unnamed;

struct unnamed { //"struct unnamed" type
    int f;
    int g;
};

int main(int argc, char *argv[]) {
    struct data data1 = {'B', 2};

    anonymous anon1 = {'S', 30};

    new_s1 standard1 = {6, 2};

    unnamed str1;
                             //two different data types!!!
    struct unnamed str2;

    return EXIT_SUCCESS;
}