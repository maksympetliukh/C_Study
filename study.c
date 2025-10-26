/* Functions in C */

#include <stdio.h>
#include "exterfunc.h"

int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int mul(int a, int b){return a*b;}
int div(int a, int b){return a/b;}
int mod(int a, int b){return a%b;}

int message(int x);
//int func(int);//doesn't work since C23 standard

int main() {
    int a, b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Choose an operation (+, -, *, /, %%): ");
    char ans = 0;
    scanf(" %c",&ans);

    if ((ans == '/' || ans == '%') && b == 0){printf("Incorrect input\n"); return 1;}

    switch (ans) {
        case '+': printf("Result = %d\n", add(a,b));break;
        case '-': printf("Result = %d\n", sub(a,b));break;
        case '*': printf("Result = %d\n", mul(a,b));break;
        case '/': printf("Result = %d\n", div(a,b));break;
        case '%': printf("Result = %d\n", mod(a,b));break;
        default: return 0;
    }

    message(0);

    external();

    return 0;
}

int message (int x) {
    printf("Enter the number\n");
    scanf("%d",&x);
    if (x != 0){
        printf("Correct input\n");
    }else{printf("Incorrect input\n");}
}
