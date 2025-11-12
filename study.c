/* Arrays and Structures*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint8_t a;
    uint32_t c;
}data;


int main(void) {
    data data0[2] = {
        {'A', 65},
        {'B', 66},
    };

    data* ptr_data [2] = { &data0[0], &data0[1] };
    size_t array_size = 2;

    data* p_data = (data*)malloc(sizeof(data) * array_size);
    if (p_data == NULL) {free(p_data); return 1;}
    for (uint32_t i = 0; i < array_size; i++) {
        p_data[i].a = ptr_data[i]->a;
        p_data[i].c = ptr_data[i]->c;
        printf("p_data[%d].a = %c\np_data[%d].c = %d\n", i, p_data[i].a, i,  p_data[i].c);
    }
    free(p_data);
    p_data = NULL;

    return EXIT_SUCCESS;
}