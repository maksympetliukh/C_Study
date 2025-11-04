#include <stdio.h>
extern int a;
void external_print_a(){printf("External Increased A = %d\n", ++a);}
int b = 10;
void external_print_b(){printf("External B = %d\n", b);}

static void static_func(){printf("Static function\n");}//static functions available only in current translation unit
void get_static(){static_func();}

//To create the correct .exe file we need to compile both .c (study and exterfunc) files together
//gcc study.c exterfunc.c -o study.exe          !!!