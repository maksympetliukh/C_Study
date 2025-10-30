/* Recursion */

#include <stdio.h>
#include <stdlib.h>

/*
#pragma region Indirect Recursion--------
int counter = 20;

int func0();
int func1();

//Indirect recursion
int func0() {
    --counter;
    if (counter <= 0) {return counter;}
    printf("From func0 counter %d\n", counter);
    counter -= func1();
    return counter;
}

int func1() {
    --counter;
    if (counter <= 0) {return counter;}
    printf("From func1 counter %d\n", counter);
    counter -= func0();
    return counter;
}

int main(int argc, char* argv[]) {
    func0();

    return EXIT_SUCCESS;

#pragma endregion
}
*/


/*
#pragma region Stack Overflow--------

int stack_overflow(int a){return  a += stack_overflow(a);}

int main(int argc, char* argv[]) {
    stack_overflow(2);

    printf("End");

    return EXIT_SUCCESS;

#pragma  endregion \

}
*/