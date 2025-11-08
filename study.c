/* Dynamic memory allocation - Calloc */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int* pVar0 = calloc(1, sizeof(int));//calloc allocates memory and initialize it with 0
    printf("pVar0 = %d\n", *pVar0);//pVar0 = 0;
    printf("Address of pVar0 = %p\n", pVar0);
    free(pVar0);

    char* pArr0 = calloc(5, sizeof(char));
    if (pArr0 != NULL) {for (int i = 0; i < 5; i++) {printf("arr0[%d] = %d\n", i, pArr0[i]);}}

    pArr0[0] = 'H';
    pArr0[1] = 'e';
    pArr0[2] = 'l';
    pArr0[3] = 'l';
    pArr0[4] = 'o';

    if (pArr0 != NULL) {for (int i = 0; i < 5; i++) {printf("%c", pArr0[i]);}}
    free(pArr0);

    int* input = calloc(1, sizeof(int));
    if (input == NULL) {printf("\nIncorrect input\n"); return 1;}

    printf("\nPlease enter a number: ");

    if (scanf("%d", input) == 1) {printf("Correct input\n");}else{printf("Incorrect input\n");}
    free(input);
    input = NULL;

    return EXIT_SUCCESS;
}