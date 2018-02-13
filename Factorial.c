#include <stdio.h>

int main() {
    int number, result;
    while(1 == 1) {
        printf("Enter a number to factorialize: ");
        scanf("%d", &number);
        result = number;
        number--;
        while(number > 0) {
            result = result * number;
            number--;
        }
        printf("The factorial is %d.\n", result);
    }

    return 0;
}
