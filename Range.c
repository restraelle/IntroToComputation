#include <stdio.h>

int main() {
    int number1, number2, counter;

    while(1) {
        printf("\nEnter number 1: ");
        scanf("%d", &number1);
        printf("Enter number 2: ");
        scanf("%d", &number2);

        if(number1 < number2) {
            counter = number1;
            while(counter <= number2) {
                printf("%d ", counter);
                counter++;
            }
        } else if(number1 > number2) {
            counter = number1;
            while(counter >= number2) {
                printf("%d ", counter);
                counter--;
            }
        }
    }

    return 0;
}
