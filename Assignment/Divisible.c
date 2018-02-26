#include <stdio.h>
#include <math.h>

// function that prompts user for an integer value
int getInt() {
    int value;
    scanf("%d", &value);
    return value;
}

int main() {
    // initializing an int array
    int number[5];

    // uses function above to prompt user for a value in a concise manner
    printf("Enter the first number: ");
    number[0] = getInt();
    printf("Enter the second number: ");
    number[1] = getInt();
    printf("Enter the third number: ");
    number[2] = getInt();
    printf("Enter the fourth number: ");
    number[3] = getInt();
    printf("Enter the fifth number: ");
    number[4] = getInt();

    // printing the headers for the table
    printf("\n");
    printf("%-10s|%-20s\n", "Number", "Divisible by");
    printf("%-10s|%-5d|%-5d|%-5d|%-5d|\n", "", 2, 3, 5, 7);

    // using a static "for" loop due to the fact that pairs doesn't exist in C :P
    for(int a = 0; a <= 4; a++) {
        printf("%-10d|", number[a]);
        // checks if the number is divisible by 2 if it equals 0
        if(number[a] % 2 == 0) {
            printf("%-5s|", "x");
        } else {
            printf("%-5s|", "");
        }
        if(number[a] % 3 == 0) {
            printf("%-5s|", "x");
        } else {
            printf("%-5s|", "");
        }
        if(number[a] % 5 == 0) {
            printf("%-5s|", "x");
        } else {
            printf("%-5s|", "");
        }
        if(number[a] % 7 == 0) {
            printf("%-5s|\n", "x");
        } else {
            printf("%-5s|\n", "");
        }
    }
    return 0;
}
