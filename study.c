/*Boolean (logic) Operations*/

#include <stdio.h>

int main() {

    int a = 5;
    int b = 5;
    printf("a == b result %d\n", a == b);
    printf("a == 6 result: %d\n", a == 6);
    printf("result: %d\n", (a + 5) == (b * 3));
    printf("result: %d\n", (a + 5) == (b * 2));

    printf("a != 5 result: %d\n", a != 5);
    printf("result: %d\n", a != b * 10);

    printf("result: %d\n", a < b);
    printf("result: %d\n", a > 1);

    printf("result: %d\n", a >= b);
    printf("result: %d\n", a <= 1);
    printf("result: %d\n", (a == 5) >= (b < 11));

    printf("result: %d\n", (a + b) && (a * 2));
    printf("result: %d\n", (a + b) && (a - 5));
    printf("result: %d\n", 0 && (a * 3));
    printf("result: %d\n", (a + b) && 1);

    printf("result: %d\n", a || 0);
    printf("result: %d\n", a || 1);
    printf("result: %d\n", a || b + 2);
    printf("result: %d\n", 0 || b + 1);
    printf("result: %d\n", 0 || b - a);

    printf("result: %d\n", !28);
    printf("result: %d\n", !0);
    printf("result: %d\n", !(a - b));
    printf("result: %d\n", !(a + b));
    printf("result: %d\n", !!0);
    printf("result: %d\n", !!a);
    return 0;
}

