/* Structure memory organization */

#include <stdio.h>
#include <stdlib.h>

struct example0 {
    char a;
    char b;
    int c;
    char d;
};

struct example0 example_array0[2] = {{1, 2, 3, 4}, {5, 6,7,8}};

#pragma pack (show)
struct Cars {
    char* brand;
    char* model;
    int year;
    double price;
};

struct Cars cars_array1[2] = {{"BMW", "M3", 2005, 25000.00 }, {"Toyota", "Supra", 2003, 45000.00}};


struct design_1 {
    char ch1;
    int var;
    char ch2;
    double d;
};

struct design_2 {
    char ch1;
    char ch2;
    int var;
    double d;
};

struct __attribute__((aligned(16))) big_endian {
    char ch;
    short sh;
    int i;
};

struct little_endian {
    char ch;
    short sh;
    int i;
};

int main(int argc, char *argv[]) {
    printf("Struct Cars size is %zd bytes\n", sizeof(struct Cars));
    printf("Struct Cars size is %zd bytes\n", sizeof(cars_array1[0]));
    printf("Struct Cars size is %zd bytes\n", sizeof(cars_array1[1]));

    printf("Size of design_1 is %zd bytes\n", sizeof(struct design_1));//24
    printf("Size of design_2 is %zd bytes\n", sizeof(struct design_2));//16

    struct big_endian arrBE[2] = {{1,5,9}, {1, 5, 9}};

    int control = 7;

    struct little_endian arrLE[2] = {{1,5,9}, {1, 5, 9}};

    printf("Size of big_endian is %zd bytes\n", sizeof(struct big_endian));
    printf("Size of little_endian is %zd bytes\n", sizeof(struct little_endian));

    return EXIT_SUCCESS;
}