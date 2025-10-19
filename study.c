/* Pointers and compound literals */

#include <stdio.h>

struct Car{int year; int price; char name[10];};

void SetCar(struct Car _car){printf("Year - %d\nPrice - %d USD\nBrand - %s\n", _car.year, _car.price, _car.name);};

int main() {
    int* p = (int[2]){1, 2};
    printf("Address of compound literal is %p\n", p);
    printf("p[1] =  %d\n", p[1]);

    SetCar((struct Car){2001,3000, "Opel"});

    return 0;
}