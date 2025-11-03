/* Declaration, definition, local and global variables */

#include <stdio.h>
#include <stdlib.h>

int a = 7;//initialization (definition)
int b = 44, c, *ptr;  //global variables // c, *ptr - declaration
int arr[5];//declaration

double func0(double x, double y){double result = x + y; return result;}// x and y - parameters (local)
void func1();

int main(int argc, char* argv[]) {

    int a_loc = 5;//local variable
    func1();//function declaration

    printf("%f\n", func0(3.14, 3.14));

    return EXIT_SUCCESS;
}

void func1(void) {printf("Function\n");}//function definition