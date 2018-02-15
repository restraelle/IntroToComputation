#include <stdio.h>

int main() {
    int numbers = 0;
    int counter = 0;
    int buffer;
    double result;

    while(1==1) {
        printf("Enter a number: ");
        scanf("%d", &buffer);
        if(buffer == -1) {
            break;
        } else {
            numbers += buffer;
            buffer = 0;
            counter++;
        }
    }

    result = (double)numbers / (double)counter;

    printf("The average of all of the numbers you put in is %.2f.", result);

    return 0;
}
