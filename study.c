/*Operators continue, break, go to*/
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; ++i) {

        if (i == 5){continue;}//skip i == 5 and continue loop

        printf("Main loop %d\n", i);
    }

    int a = 0;
    while (a < 10) {

        ++a;
        if (a == 5){continue;}// skip  a == 5 and continue loop

        printf("While loop %d\n", a);
    }

    for (int i = 0; i < 3; ++i) {
        printf("Main loop %d\n", i);
        for (int j = 0; j < 3; ++j) {
            if (j == 2) {
                continue;//skip j == 2 and continue nested loop
            }
            printf("Nested  loop %d\n", j);
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("Main loop %d\n", i);
        if (i == 5) {
            continue;
        }
        if (i == 8) {
            break;//exit from nested loop before printf
        }
        printf("Nested loop %d\n", i);
    }

    int b = 5;
    switch (b) {
        case 1: printf("Switch %d\n", b);
        case 2: printf("Switch %d\n", b);
        case 3: printf("Switch %d\n", b);
        case 4: printf("Switch %d\n", b);
        case 5: printf("Switch %d\n", b);break;
        default: printf("Switch default\n");
    }

    goto point1;

    printf("Hello\n");//unusable while using goto

    point1:printf("Point 1\n");

    //goto point2;                   /
    //point3: {printf("Hello\n");}  /useless
    //point2:{printf("Point 2\n");}/
    //goto point3;

   // int f = 1;
    //for (int i = 0; i < 10 && f; ++i) {
        //printf("I-loop %d\n", i);
        //for (int j = 0; j < 10; ++j) {
            //printf("J-loop %d\n", j);
            //for (int k = 0; k < 10; ++k) {
                //printf("K-loop %d\n", k);
                //if (k == 5) {
                    //printf("Loop exit\n");
                    //f = 0;
                    //break;
          //      }
           // }
       // }
    //}

    for (int i = 0; i < 10; ++i) {
        printf("I-loop %d\n", i);
        for (int j = 0; j < 10; ++j) {
            printf("J-loop %d\n", j);
            for (int k = 0; k < 10; ++k) {
                printf("K-loop %d\n", k);
                if (k == 5) {
                    printf("End\n");
                    goto label;
                    break;
                }
            }
        }
    }
    label:;//correct usage of goto in loops

    int c = 3;
    switch (c) {
        case 0: printf("Switch %d\n", c);
        p1: case 1: printf("Switch %d\n", c);break;
        case 2: printf("Switch %d\n", c);
        case 3: printf("Switch %d\n", c);              //correct usage of goto in switch
        case 4:{printf("Switch %d\n", c); goto p1;}
        case 5: printf("Switch %d\n", c);break;
        default: printf("Switch default\n");
    }

    //int var = 5;
    //if (var == 2){printf("var = %d\n", var); return 2;}
    //if (var == 3){printf("var = %d\n", var); return 3;}
   // if (var == 4){int temp = printf("%d\n", var); printf("temp = %d\n", temp); return temp;}
    //if (var == 5){return ++var,  printf("var = %d\n", var);}

    for (int i = 0; i < 10; ++i) {
        printf(" i = %d\n", i);
        if (i == 5){ return 1; }//return as loop exit
    }

    return 0;
}