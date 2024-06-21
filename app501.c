#include <stdio.h>
int x = 0b1011; //binary = 2
int y = 0x10; //hexadecimal = 16
int z = 10; //Decimal = 10

int main()
{
    printf("x in Decimal :%d\n", x);
    printf("x in Octal :%o\n", x);
    printf("x in Hexadecimal :%x\n", x);
    //printf("x in Binary :%0d\n\n", x);

    printf("y in Decimal :%d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal :%0x\n\n", y);
    //printf("y in Binary :%0d\n\n", y);

    printf("z in Decimal :%d\n", z);
    printf("z in Octal :%o\n", z);
    printf("z in Hexadecimal :%0x\n\n", z);
    return 0;
    
}