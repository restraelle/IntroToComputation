#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    num1 = 1;
    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = 5;

    printf("%14s|%14s|%14s|%14s|%14s|%14s|\n", "", "Number1", "Number2", "Number3", "Number4", "Number5");
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "1x", num1, num2, num3, num4, num5);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "2x", 2*num1, 2*num2, 2*num3, 2*num4, 2*num5);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "3x", 3*num1, 3*num2, 3*num3, 3*num4, 3*num5);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "4x", 4*num1, 4*num2, 4*num3, 4*num4, 4*num5);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "5x", 5*num1, 5*num2, 5*num3, 5*num4, 5*num5);
}
