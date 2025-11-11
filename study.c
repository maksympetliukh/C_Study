/*Dynamic memory allocation for structures*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int year;
    char* model;
    double price;
}Car;

int main(void) {
    Car* bmw = malloc(sizeof(Car));
    if (bmw == NULL){printf("Allocation failed\n"); return EXIT_FAILURE;}
    bmw->year = 2025;
    bmw->model = (char*)malloc(strlen("BMW X5") + 1);
    if (bmw->model == NULL){printf("Allocation failed\n"); exit(1);}
    strcpy(bmw->model, "BMW X5");
    bmw->price = 75000.00;

    printf("Model: %s\nPrice: %.2lf\nYear: %d\n", bmw->model, bmw->price, bmw->year);
    free(bmw->model);
    free(bmw);
    bmw = NULL;

    return EXIT_SUCCESS;
}