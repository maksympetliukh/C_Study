/*Bitwise operations*/

#include <stdio.h>

int main() {
    int a = 1;//0b00000001;//bitwise NOT
    int b = ~a;//-2 (0b11111110)
    printf("b = %d\n", b);// -2

    int c = 0b00101110;
    int d = 0b00110110;
    int e = c | d;//bitwise OR//c = 0b00111110;
    printf("e = %d\n", e);

    int f = c & d;//0b00100110;// bitwise multiplication
    printf("f = %d\n", f);

    int g = c ^ d;//0b00011000;// bitwise XOR//24
    printf("g = %d\n", g);

    int h = c << 2;//0b10111000//left bitwise shift
    printf("h = %d\n", h);

    int i = d >> 3;//0b00000110;//right shift
    printf("i = %d\n", i);

    //h = c << -2;//incorrect
    //i = d >> 4.18;//incorrect

    c = -2;
    c = c << 1;
    printf("c = %d\n", c);
    d = -17;
    d = d >> 2;
    printf("d = %d\n", d);

    int var0 = -28;
    var0 = ~var0 + 1;//sign change
    printf("var0 = %d\n", var0);

    int var1 = 0;
    int n = 3;
    var1 = var1 | (1 << n);//set target bit//00000000000000000000000000000001 << 3, then 00000000000000000000000000000000
    //                                                                                   00000000000000000000000000001000
    //                                                                                 = 00000000000000000000000000001000

    int target_bit0 = 4;   //
    int target_bit1 = 6;  //masks
    int target_bit2 = 12;//

    var1 = var1 | (1 << target_bit0)| (1 << target_bit1) | (1 << target_bit2);
    printf("var1 = %d\n", var1);

    //00000000000000000000000000001000
    //00000000000000000000000000010000
    //00000000000000000000000001000000
    //00000000000000000001000000000000
    //--------------------------------
    //00000000000000000001000001011000

    int var2 = 255;
    int target_bit3 = 3;
    var2 = var2 &  ~(1 << target_bit3);//switch off target bit
    printf("var2 = %d\n", var2);

    //00000000000000000000000000001000
    //11111111111111111111111111110111
    //00000000000000000000000011111111
    //--------------------------------
    //00000000000000000000000011110111
    int target_bit4 = 3;
    int target_bit5 = 5;
    int target_bit6 = 6;

    var2 = 255;
    var2 = var2 & ~((1 << target_bit4) | (1 << target_bit5) | (1 << target_bit6));
    printf("var2 = %d\n", var2);

    //00000000000000000000000000001000
    //00000000000000000000000000100000
    //00000000000000000000000001000000
    //--------------------------------
    //00000000000000000000000001101000// mask
    //11111111111111111111111110010111//inverted mask
    //00000000000000000000000011111111//255
    //00000000000000000000000010010111

    var2 = 255;
    int target_bit7 = 3;
    var2 = var2 ^ (1 << target_bit7);//switch target bit
    printf("var2 = %d\n", var2);

    //00000000000000000000000011111111
    //00000000000000000000000000001000
    //---------------------------------
    //00000000000000000000000011110111

    int var3 = 1978;
    int target_bit8 = 10;
    int target_bit_value = (var3 >> (target_bit8 - 1)) & 1;//getting the value of a target bit
    printf("target_bit_value = %d\n", target_bit_value);

    //00000000000000000000001111011010
    //00000000000000000000000000001001
    //--------------------------------
    //00000000000000000000000000000001

    printf("target bit value = %d\n", (1997 >> (3 - 1)) & 1);

    int var4 = 1978;//00000000000000000000001111011010
    printf("%d\n", (var4 & (-var4)));//selection of the rightmost 1 or 0//2 - second bit

    var4 =  0b00000000000000000000001000000000;//512
    printf("%d\n", (var4 & (-var4)));

    var4 =  0b00100000100000000000001000011111;//32
    printf("%d\n", (~var4 & (var4 + 1)));

    int var5 = ~(1 << 31);//maximum integer
    printf("var5 = %d\n", var5);

    //00000000000000000000000000000001
    //10000000000000000000000000000000//-2147483648
    //---------------------------------
    //011111111111111111111111111111111//2147483647

    int var6 = (1 <<31) - 1;
    printf("var6 = %d\n", var6);

    //00000000000000000000000000000001
    //10000000000000000000000000000000
    //--------------------------------
    //00000000000000000000000000000001

    int var7 = (1 << -1) - 1;//incorrect// works only on GCC
    printf("var7 = %d\n", var7);

    printf("minimal integer = %d\n", (1 << 31));//minimal integer
    printf("minimal integer = %d\n", (1 << -1));//incorrect, works only on GCC

    int var9 = 8;
    int parity = (var9 & 1) == 1;//even - 0, odd - 1
    printf("parity = %d\n", parity);//0
    printf("parity = %d\n", var9 % 2);

    int var10 = 5;
    int var11 = 7;
    var10 = var10 ^ var11;//var10 ^= var11
    var11 = var11 ^ var10;//var11 ^= var10
    var10 = var10 ^ var11;//var10 ^= var11

    printf("var10 = %d\n", var10);

    var10 = 5;
    var11 = 7;

    var10 += var11;
    var11 -= var10;
    var10 -= var11;
    printf("var10 = %d\n", var10);

    int var12 = -6;
    int absolute_value = (var12 ^ (var12 >> 31)) - (var12 >> 31);
    printf("absolute_value = %d\n", absolute_value);//absolute value (module)

    absolute_value = (var12 < 0) ? -var12 : var12;
    printf("absolute_value = %d\n", absolute_value);

    int var13 = -27;
    int var14 = 27;
    int sign_res = (var13 ^ var14) >= 0;//checking for the same sign
    printf("sign_res = %d\n", sign_res);

    int var15 = 4;
    printf("result = %d\n", 2 << (var15 - 1));

    int var16 = 4;
    printf("result = %d\n", (var16 & -var16)== var16);//checking for the power of 2

    int var17 = 32;
    int var18 = 7;
    printf("result = %d\n", var17 + var18 >> 1);//average

    printf("result = %d\n", ((var17 ^ var18) >> 1) + (var17 & var18));//average

    char byte1 = 0b00001101;
    char byte2 = 0b00001110;
    char byte3 = 0b01101111;
    short result_glue = byte1 | (byte2 << 8);//byte gluing
    printf("result = %d\n", result_glue);

    int result_1 = byte1 | (byte2 << 8) | (byte3 << 16);
    printf("result_1 = %d\n", result_1);

    return 0;
}