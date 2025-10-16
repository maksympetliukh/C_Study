/*Enumeration - enum*/
#include <stdio.h>

enum DAYS{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} yesterday, today = Sunday;
enum CARS{BMW = -2, Audi, Opel = 5, VW, Nissan = 4, Toyota} car1 = Audi, car2 = VW, car3 = VW;
enum COLOR{Red, Green, Blue} r = Red;

int main() {
    yesterday = --today;
    printf("Yesterday is %d day of week\n", yesterday);

    enum DAYS day;
    day = Monday;

    day += 1;
    printf("The second day of the week is day number %d\n", day);


    enum CARS car4 = Toyota;

    switch (r) {
        case Red: printf("Red\n"); break;
        case Green: printf("Green\n"); break;
        case Blue: printf("Blue\n"); break;
        default: printf("Default color\n");
    }

    //In C23 standard we can set enum type// enum Count: char{One, Two, Three, ...};
    return 0;
}