/* Sizeof, typedef */

#include <stdio.h>

typedef unsigned long long int uint64;
typedef enum Days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

typedef int ret_arr[5];
ret_arr* RetArr(float){static int arr[5]; printf("Ok\n");return arr;}

int main() {
    char c0 = 'A';
    printf("%c = %d\nSize of c0 is %zu byte\n", c0, c0, sizeof(c0));
    printf("Size of 'A' is %zu bytes\n", sizeof('A'));//compiler see 'A' as int type (4 bytes)

    unsigned char c1 = 'B';
    printf("c1 size is %zu byte\n", sizeof(c1));
    printf("Size of unsigned char is %zu bytes\n", sizeof(unsigned char));

    unsigned char c2 = 255;
    unsigned char c3 = 255;
    printf("Size of (c2 + c3) is %zu bytes\n", sizeof(c2 + c3));//compiler see it as int type

    //sizeof calculate bytes in type or expression but doesn't calculate result of expression

    printf("Size of int is %zu bytes\n", sizeof(long));
    printf("Size of short int is %zu bytes\n", sizeof(short));
    printf("Size of double is %zu bytes\n", sizeof(double));
    printf("Size of long double is %zu bytes\n", sizeof(long double));

    int arr[5];
    int* p = arr;

    printf("Size of arr is %zu bytes\n", sizeof(arr));//size of sum of all elements (5 ints - 5 * 4 = 20 bytes)
    printf("Size of pointer is %zu bytes\n", sizeof(*p));
    printf("Size of array address is %zu bytes\n", sizeof(&arr));
    printf("Size of element is %zu bytes\n", sizeof(arr[0]));

    printf("Count of array elements = %zu\n", sizeof(arr)/sizeof(arr[0]));

    uint64 ui0 = 100000000000000000ULL;
    printf("Size of ui0 is %zu bytes\n", sizeof(ui0));

    enum Days today = 6;

    int input =  today;
    printf("Please, choose the day (From 0 to 6)\n");
    scanf("%d", &input);
    switch (input) {
        case 0: printf("Today is Monday\n"); break;
        case 1: printf("Today is Tuesday\n"); break;
        case 2: printf("Today is Wednesday\n"); break;
        case 3: printf("Today is Thursday\n"); break;
        case 4: printf("Today is Friday\n"); break;
        case 5: printf("Today is Saturday\n"); break;
        case 6: printf("Today is Sunday\n"); break;
        default: printf("Invalid input\n"); break;
    }

    int(*(*Array[7])(float))[5] = {RetArr, RetArr, RetArr, RetArr, RetArr};

    (*Array[0])(3.14);

    return 0;
}