#include <stdio.h>
#include "extern_header.h"

struct extern_data extern_data = {11, 35};//compiler knows how to build this struct from extern_header.h
const struct const_data const_data = {10, 50};

//const_data.var1 = 90; error, impossible to change const struct field