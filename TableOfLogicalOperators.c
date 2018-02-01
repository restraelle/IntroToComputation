#include <stdio.h>
#include <iso646.h>

int main() {
    int a, b;
    a = b = 0;

    printf("%8s|%8s|%8s|%8s|%8s\n", "A", "B", "A and B", "A or B", "not A");
    b = 1;
    printf("%8i|%8i|%8i|%8i|%8i\n", a, b, (a && b), (a || b), (!a));
    a = 1;
    b = 0;
    printf("%8i|%8i|%8i|%8i|%8i\n", a, b, (a && b), (a || b), (!a));
    a = b = 1;
    printf("%8i|%8i|%8i|%8i|%8i\n", a, b, (a && b), (a || b), (!a));
    a = b = 0;
    printf("%8i|%8i|%8i|%8i|%8i\n", a, b, (a && b), (a || b), (!a));

    return 0;
}
