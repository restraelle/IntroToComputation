#include <stdio.h>

int main() {
    int initialNumber, finalNumber, counter;

    printf("Enter the starting number: ");
    scanf("%d", &initialNumber);

    printf("Enter the ending number: ");
    scanf("%d", &finalNumber);

    counter = initialNumber;

    while(counter <= finalNumber) {
        if(counter % 2 == 0) {
            printf("%d\n", counter);
        }
        counter++;
    }

    return 0;
}
