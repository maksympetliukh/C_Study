/*Tokens*/

#include <stdio.h>

int main(){
    //lexer - maximum munch

    //int my_var;
    //int my_var0;
    //int var = 0x11CA;

    // ; end of operator

    int a = -3;
    char b = 7;
    //a;
    //a = b = a;
    //a+;
    //+a;
    //a + b;
    //a+ b;
    //a +b;
    //a++b; - error
    //a ++b; - error
    //a ++ b; - error
    //a + + b;//a + (+b);
    //printf(" b = %d\t", b);
    //printf(" %zd \n", sizeof(+b));// type promotion
    //a+++b; - a++ +b; - a +++b;
    //a + ++b; - a + (++b);
    //a + + +b; - a + (+(+b)) - a + + + b;
    //a++++b; - error a++ ++b;
    //a + +++b; - error a + +++b;
    //a + + ++b; - a + (+(++b));
    //printf("b = %d\t%zu\n",++b,  sizeof(+(++b)));
    //a + + + + b; - a + (+(+(+b)));
    //a++ + + b; - a++ + (+b); 
    //a++++++b; - error
    //a +++++b; (a++) ++ error
    //Multiple consecutive '+' signs are considered a lexical error
    //a + + ++ ++b; a + error
    //a + + + + ++b; a + (+(+(+(++b))));
    //a + + + + + +b; a + (+(+(+(+b))));
    //a++++ + b; - error '++' needs l-value
    //a+++ + + b; (a++) + (+(+b));
    //a++ + + ++b; (a++) + (+(++b));

    printf(" b = %d\tsize of b = %zu\n",b, sizeof(+ + b));
    printf(" b = %d\tsize of b = %zu\n", ++b, sizeof(+ ++b));
    return 0;
}
