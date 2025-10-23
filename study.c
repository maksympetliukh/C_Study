/* Array of Characters */

#include <stdio.h>

int main() {
    char arr[5] = { 'A', 'B', 'C', 'D', 'E' };

    printf("Arr 4 is %c\n", arr[4]);
    //printf("Array's string %s\t", arr);//incorrect

    char str[6] = { 'A', 'B', 'C', 'D', 'E', '\0' };//use null character '\0' for correct string work
    printf("String is %s\n", str);

    char str1[] = "hello";
    printf("%s\n", str1);

    //char str1[50] = "hello"//incorrect, compiler is going to fill every empty element with zero
    //char str1[2] = "hello"//incorrect

    char book[][3] = {"Hi", "Yo", "BB",{'a', 'b', '\0'}};
    printf("%s\n", book[1]);

    char format_arr[] = "Hello\nMy\n\"Kind\" World";
    printf("%s\n", format_arr);
    return 0;
}