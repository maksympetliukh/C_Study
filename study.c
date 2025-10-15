/*Loops while, do while, for*/

 #include <stdio.h>

 int main() {
     int i = 10;
     while (i > 0) {--i; printf("i = %d\n", i);}

     int c = -127;
     while (++c){printf("c = %d\n", c);}

     char ch = -127;
     while (--ch){printf("ch = %d\n", ch);}//overflowing

     int x = 10;
     while ((x--) > 0) {printf("x = %d\n", x);}

     //while (1){printf("Infinite loop\n");}//Infinite loop

     int y = 10;
     while (y <= 0 ? printf("y = %d\n", y) : --y){printf("While %d\n", y);}

     //char buffer[100];
     //char *pbuf = buffer;
     //while ((*pbuf++ = getchar()) != '\n');

    // int count = 0;
     //while (buffer[count] != '\n'){printf("%c",buffer[count - 1]);}

     //pbuf = buffer - 1;
     //while (*pbuf++ != '\n'){printf("%c", *pbuf);}

     do{printf("hello\n");}while (0);

     x = 5;
     do{--x;printf("x = %d\n", x);}while (x > 0);

     x = 1;
     do{x <<= 1;printf("x = %d\n", x);}while (x < 8);

     //for (;;){}// infinite loop

     for (int iter = 0; iter < 10; ++iter) {printf("iteration = %d\n", iter);}

     for (int b = 10; b > 0; --b) {printf("b = %d\n", b);}

     for (int i_1 = 0, i_2 = 0; i_1 < 5, i_2 < 3; i_1++, ++i_2){printf("I1 = %d\tI2 = %d\n", i_1, i_2);}

     int e = 10;
     for (;--e;){printf("e = %d\n", e);}//can be replaced with while loop

     for (int var = 0;var <= 10; var++){if (var != 0 && (var % 2 == 0)) {printf("var = %d\n", var);}}

     for (int var1 = 0; var1 < 1; var1++) {
         printf("Loop enter\n");
         for (int var2 = 0; var2 < 1; var2++) {
             printf("loop works\n");
         }
         printf("Loop exit\n");
     }

     //int a = 0;
     //for (int counter = -1; counter != 0; --counter) {a = counter; printf("a = %d\n", a);}//overflowing//undefined behavior//or 1

   return 0;
 }