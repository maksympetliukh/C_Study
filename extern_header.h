#ifndef EXTERN_HEADER_H
#define EXTERN_HEADER_H

struct extern_data { //general extern struct type
    int x;
    int y;
};

extern struct extern_data extern_data;

struct const_data {
    int var0;
    int var1;
};

extern const struct const_data const_data;

#endif
