/*Copying of structures*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct {
    int year;
    int price;
    char* name;

} example;

typedef struct {
    int ID;
    example* nested_example;
}outer_example;

//deep copy
int deep_struct_copy(const outer_example* source, outer_example* dest) {
    if (source == NULL || dest == NULL) {return EXIT_FAILURE;}
    if (source->nested_example == NULL || dest->nested_example == NULL) {return EXIT_FAILURE;}
    if (source->nested_example->name == NULL || dest->nested_example->name == NULL) {return EXIT_FAILURE;}

    dest->ID = source->ID;
    dest->nested_example->year = source->nested_example->year;
    dest->nested_example->price = source->nested_example->price;
    char* result = strcpy(dest->nested_example->name, source->nested_example->name);

    printf("result = %s\n", result);
    return 0;
}

int main(void) {
    //shallow copy
    example ex1 = {2025, 35000, "Audi"};
    example ex2 = ex1;

    printf("ex2.name = %s\n", ex2.name);

    //shallow copy
    example ex3 = {2026, 50000};
    ex3.name = malloc(strlen("Volkswagen") + 1);
    if (ex3.name == NULL) {exit (1);}
    strcpy(ex3.name, "Volkswagen");

    printf("ex3.name = %s\n", ex3.name);

    free(ex3.name);
    ex3.name = NULL;

    //deep copy
    char buffer[SIZE];

    printf("Enter some word: \n");
    scanf("%9s", buffer);

    printf("you entered %s\n", buffer);

    outer_example* outer_1 = malloc(sizeof(outer_example));
    if (outer_1 == NULL) {exit (1);}

    outer_1->ID = 14;

    outer_1->nested_example = malloc(sizeof(example));
    if (outer_1->nested_example == NULL) {exit (1);}

    outer_1->nested_example->price = 20000;
    outer_1->nested_example->year = 2025;
    outer_1->nested_example->name = malloc(sizeof(char) * SIZE);
    if (outer_1->nested_example->name == NULL) {exit (1);}

    strcpy(outer_1->nested_example->name, buffer);

    printf("outer_1->nested_example->name = %s\n", outer_1->nested_example->name);

    outer_example* outer_2 = malloc(sizeof(outer_example));
    if (outer_2 == NULL) {exit (1);}

    outer_2->nested_example = malloc(sizeof(example));
    if (outer_2->nested_example == NULL) {exit (1);}

    outer_2->nested_example->name = malloc(sizeof(char) * SIZE);
    if (outer_2->nested_example->name == NULL) {exit (1);}

    deep_struct_copy(outer_1, outer_2);

    free(outer_2->nested_example->name);
    free(outer_2->nested_example);
    free(outer_2);
    free(outer_1->nested_example->name);
    free(outer_1->nested_example);
    free(outer_1);
    outer_1 = NULL;

    return EXIT_SUCCESS;
}