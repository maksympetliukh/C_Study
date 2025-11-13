    /*Structures as arguments of functions*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    //Example 1
    typedef struct {
        int ID;
        char name[10];
    }Example;

    void by_value(Example var) {
        printf("Name: %s\nID: %d\n", var.name, var.ID);
    }
    //Example 2
    void by_reference(Example* p_var, int _id,const char*  _name) {
        p_var->ID = _id;
        strncpy(p_var->name, _name, sizeof(p_var->name) - 1);
        p_var->name[sizeof(p_var->name) - 1] = '\0';
        printf("Name: %s\nID: %d\n", p_var->name, p_var->ID);
    }

    //Example 3
    typedef struct {
        int a;
        int* ptr;
    }NewStruct;

    void new_by_value(NewStruct var) {
        if (var.ptr){printf("a = %d\nAddress of ptr = %p\nValue at ptr = %d\n", var.a, var.ptr, *var.ptr);}
    }

    void new_by_reference(NewStruct* p_var, int _a, int * _ptr) {
        p_var->a = _a;
        p_var->ptr = _ptr;
        if (p_var->ptr){*p_var->ptr = _a;}
        printf("a = %d\nAddress of ptr = %p\nValue at ptr = %d\n", p_var->a, p_var->ptr, *p_var->ptr);
    }

    //Example 4
    NewStruct return_struct_value() {
        NewStruct v1 = {15, NULL};
        return v1;
    }

    //Example 5
    NewStruct* return_struct_reference() {
        NewStruct* v2 = calloc(1, sizeof(NewStruct));
       if (!v2) {return NULL;}

        v2->ptr = calloc(1, sizeof(v2->ptr));
        if (!v2->ptr) {free(v2);return NULL;}

        *v2->ptr = 0;
        return v2;
    }

    int main(void) {
        //Example 1
        Example struct_by_value = {1006442, "Kateryna" };
        by_value(struct_by_value);

        //Example 2
        Example* struct_by_reference = malloc(sizeof(*struct_by_reference));
        if (struct_by_reference == NULL) {printf("Allocation failed\n");return EXIT_FAILURE;}
        by_reference(struct_by_reference, 1006425, "Maksym");

        free(struct_by_reference);
        struct_by_reference = NULL;

        //Example 3
        NewStruct new_struct_by_value = {917, malloc(sizeof(new_struct_by_value.ptr))};
        new_by_value(new_struct_by_value);
        free(new_struct_by_value.ptr);
        new_struct_by_value.ptr = NULL;

        NewStruct* new_struct_by_reference = malloc(sizeof(NewStruct));
        if (new_struct_by_reference == NULL) {printf("Allocation failed\n");return EXIT_FAILURE;};

        new_by_reference(new_struct_by_reference, 111, malloc(sizeof(new_struct_by_reference->ptr)));

        free(new_struct_by_reference->ptr);
        free(new_struct_by_reference);
        new_struct_by_reference = NULL;

        int b = 700;

        NewStruct rsv = return_struct_value();
        rsv.ptr = &b;
        printf("a = %d\nValue at ptr = %d\n", rsv.a, *rsv.ptr);

        //Example 5
        NewStruct* rsr = return_struct_reference();
        rsr->a = 4;
        printf("a = %d\nValue at ptr = %d\n", rsr->a, *rsr->ptr);

        free(rsr->ptr);
        free(rsr);
        rsr = NULL;

        return EXIT_SUCCESS;
    }