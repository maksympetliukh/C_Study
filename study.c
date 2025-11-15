/*Unions*/

#include <stdio.h>
#include <stdlib.h>

typedef union {
    char ch;
    int i;
    double d;
}mix;            //A union has size equal to his biggest field (element)

mix m0;

typedef union {
    char ch;
    int i;
    double d;
    struct s{int var_i; double var_d;} s;//union can store structures as member
}super_mix;

mix func(mix _mix){_mix.d = 111.222; return _mix;}//union as return value of function

int main(void) {
    m0.ch = 'A'; //A union cannot store several values of different members (elements) simultaneously
    m0.i = 65;
    m0.d = 3.1415;

    mix m1 = {0};//equal to m1.ch = 0;// initialization of the first element

    mix* m2 = &m1;
    m2->ch = 'B';

    int* ptr = &m1.i;
    *ptr = 500;

    mix m_arr[5] = {{0}, [1].i = 97, [2].i = 100, [3].ch = 'C', [4].i = 1169};//initialization of every element by different members
    for (int i = 0; i < 5; i++) {printf("m_arr[%d] = %d\n", i, m_arr[i].i);}

    super_mix sm0 = {.s = {10, 20.544}};
    printf("var_i = %d\nvar_d = %.3lf\n", sm0.s.var_i, sm0.s.var_d);
    printf("Size of sm0 is %zu bytes\n", sizeof(sm0));//16 bytes - compiler aligned int field to 8 bytes

    printf("_mix.d = %.3lf\n", func(m0).d);

    return EXIT_SUCCESS;
}
