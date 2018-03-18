#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function that returns factorial of number in parameter
int factorial(number) {
    int result = 0;
    result = number;
    number--;

    while(number > 0) {
        result = result * number;
        number--;
    }

    return result;
}

int main() {
    // defining even number sum and counter variables
    int evenNumberSum = 0;
    int result = 0;
    int a = 0;

    // checks to see if a is divisible by 2 and if so then to increment the result
    for (a = 0; a <= 10; a++) {
        if(a % 2 == 0) {
            evenNumberSum += a;
        }
    }

    printf("The sum of all even numbers between 0 and 10 is %d.\n\n", evenNumberSum);

    // gets 2 to the power of a for 16 instances and shows the result
    for (a = 0; a <= 16; a++) {
        result = pow(2,a);
        printf("2 raised to the power of %d is %d.\n", a, result);
    }

    printf("\n");

    // gets the factorial of a for 10 instances, then shows it to the user
    for (a = 1; a <= 10; a++) {
        result = factorial(a);
        printf("Factorial of %d is %d.\n", a, result);
    }

    return 0;
}
