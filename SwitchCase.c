#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);

    switch(num1) {
        case 4:
            num2 = 12;
            break;
        case 5:
        case 6:
            num2 = 5;
            break;
        case 7:
            num2 = 3;
            break;
        default:
            num2 = 0;
            break;
    }
    printf("Your number is %d.", num2);
    return 0;
}
