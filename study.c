/*String Literals*/

#include <stdio.h>
#include <wchar.h>
#include <uchar.h>

int main(){

    char* s0 = "Hello World";//{'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char (*p)[] = &"Hello World";
    wchar_t* s1 = L"Hello World";
    char16_t* s2 = u"Hello World";
    char32_t* s3 = U"Hello World";

    char array[] = "ABC";
    char* p_array = array;
    p_array[0] = 'M';
    printf("%s", array);

    return 0;
}