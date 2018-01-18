#include <stdio.h>

int main() {
    printf("%14s|%14s|%14s|%14s|%14s|%14s|\n", "", "Number1", "Number2", "Number3", "Number4", "Number5");
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "1x", 1, 2, 3, 4 ,5);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "2x", 2, 4, 6, 8 ,10);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "3x", 3, 6, 9, 12, 15);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "4x", 4, 8, 12, 16, 20);
    printf("%-14s|%14d|%14d|%14d|%14d|%14d|\n", "5x", 5, 10, 15, 20, 25);
}
