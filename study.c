/* Dynamic memory allocation - Realloc */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char* pGreeting = (char*)malloc(6 * sizeof(char));
    pGreeting[0] = 'H';
    pGreeting[1] = 'e';
    pGreeting[2] = 'l';
    pGreeting[3] = 'l';
    pGreeting[4] = 'o';
    pGreeting[5] = '\0';

    if (pGreeting){{printf("%s\n", pGreeting);}}

    pGreeting= realloc(pGreeting, 12 * sizeof(char));
    if (!pGreeting){pGreeting = NULL; return 1;}

    pGreeting[5] = ' ';
    pGreeting[6] = 'W';
    pGreeting[7] = 'o';
    pGreeting[8] = 'r';
    pGreeting[9] = 'l';
    pGreeting[10] = 'd';
    pGreeting[11] = '\0';

    if (pGreeting){printf("%s\n", pGreeting);}
    free(pGreeting);
    pGreeting = NULL;

    return EXIT_SUCCESS;
}