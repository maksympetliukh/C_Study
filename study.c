/* Structures */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* name;
    int ID;
    double GPA;
} Student;

struct Cars {
    char* brand;
    char* model;
    double price;
    int year;
} toyota = {"Toyota", "Corolla", 38000.00, 2020};

void print_cars(struct Cars p){printf("Car offer:\n%s %s\nPrice: %.2lf USD\nYear: %d\n", p.brand, p.model, p.price, p.year);}

int main(int argc, char *argv[]) {
    Student student;
    student.name = "Alber Einstein";
    student.ID = 1006425;
    student.GPA = 4.5;
    printf("Student Record: \n%s\nID: %d\nGPA: %.1lf\n", student.name, student.ID, student.GPA);//stack

    Student student2 = {student.name = "Margareth Wilbert", student.ID = 1006441, student.GPA = 4.82};//stack
    printf("Student Record: \n%s\nID: %d\nGPA: %.2lf\n", student2.name, student2.ID, student2.GPA);

    Student student3 = {"John Smith", 1006489, 4.91};//stack
    printf("Student Record: \n%s\nID: %d\nGPA: %.2lf\n", student3.name, student3.ID, student3.GPA);

    print_cars(toyota);//global structure

    struct Cars ford = {"Ford", "Focus", 25000.00, 2018};
    print_cars(ford);

    struct Cars renault = {"Renault", "Clio", 30000.00, 2021};
    struct Cars* ptr_renault = &renault;

    (*ptr_renault).year = 2022;//equal to ->
    print_cars(*ptr_renault);

    ptr_renault->price = 32500.00;
    print_cars(*ptr_renault);
    printf("Size of Cars is %zd bytes\n", sizeof(struct Cars));
    printf("Size of ptr_renault is %zd bytes \n", sizeof(ptr_renault));

    return EXIT_SUCCESS;
}