/*Constants*/

#include <stdio.h>

int main(){

    int a = 10;
    printf("a = %d\n", a);

    a = 5;
    printf("new a = %d\n", a);

    const int b = 3;
    printf("Const b = %d\n", b);

    //b = 5;//error, const cannot be rewrited
    //printf("New const b = %d\n", b);

    a = 16;
    int c = a;
    //c = a;   //
    //a = 17; //incorrect
    printf("c = %d\n", c);

    int d = b;
    printf("d = %d\n", d);

    return 0;
}