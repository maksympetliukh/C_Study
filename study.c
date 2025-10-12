/*If, else if, else*/

#include <stdio.h>

int true = 1;
int false = 0;

int main() {
     if (true){printf("Hello");}
     printf(" World\n");

     if (3.14){printf("3.14\n");}else{printf("Error\n");}

     if (true != 0){printf("True\n");}else{printf("False\n");}

     if (printf("111\n")){printf("Good job\n");}else{printf("Try again\n");}

     //if(void){}//ERROR/INCORRECT
     //if(int a = 5){}//INCORRECT/if(a = 5){}/INCORRECT

     if (true > 0){printf("Success\n");}else{printf("Try again\n");}

     if (true >= false){printf("Success\n");}else{printf("Try again\n");}

     //int x = 5;
     //if (x > 0){int x = 10; printf("New x = %d\n");}else{printf("x = %d\n", x);}//INCORRECT ON GCC

     if (true <= 1){printf("Success 1\n");}else if(false == 1){printf("Success 2\n");}else{printf("Try again");}

     if (true > false){printf("T > F\n");}else if (true < false){printf("T < F\n");}else{printf("T == F");}

     if (true){if (true){printf("hello\n");}}//NESTED IF

     int day_of_week = 1;

     if (day_of_week == 1) {
          printf("Monday\n");
     }
     else if (day_of_week == 2) {
          printf("Tuesday\n");
     }
     else if (day_of_week == 3) {
          printf("Wednesday\n");
     }
     else if (day_of_week == 4) {
          printf("Thursday\n");
     }
     else if (day_of_week == 5) {
          printf("Friday\n");
     }
     else if (day_of_week == 6) {
          printf("Saturday\n");
     }
     else if (day_of_week == 7) {
          printf("Sunday\n");
     }
     else{printf("Error\n");}
     return 0;
}