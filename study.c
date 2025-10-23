/* Pointers and Strings */

#include <stdio.h>

int main() {
    char str0[] = "Hello, my friend";
    printf("%s\n", str0);

    char* p_str0 = str0;
    printf("%s\n", p_str0);
    printf("%c\n", p_str0[0]);

    //p_str0[0] = 'A';//incorrect, impossible to change the value of constant literal's element

    char str1[] = {'a', 'b', 'c', 'd', '\0'};//but now it's okay
    char* p_str1 = str1;
    p_str1[0] = 'F';
    printf("%s\n", str1);

    return 0;
}