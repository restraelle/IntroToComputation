#include <stdio.h>

int main() {
    int number = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number == -1) {
            break;
        } else {
            printf("%d\n", number * number);
        }
    } while(number != -1);

    return 0;
}
