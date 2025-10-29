/* Main function*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

    char admin_pass[] = "admin";
    for (int i = 1; i < argc; i++) {
        printf("%d %s\n", i, argv[i]);
        if (strcmp(admin_pass, argv[i]) == 0) {
            printf("Admin mode");
            system("Notepad");
        }
    }

    return EXIT_SUCCESS;//or exit(EXIT_SUCCESS);
}