#include <stdio.h>
#include <math.h>

void fibonacciSequence(int num) {
    int a = 0;
    int b = 1;
    int c;

    printf("%d\n", a);
    printf("%d\n", b);

    for(int i = 1; i <= num-2; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}

int inputInt() {
    int result;
    printf("Enter a number: ");
    scanf("%d", &result);
    return result;
}

int main() {
    int num = inputInt();
    fibonacciSequence(num);
    return 0;
}
