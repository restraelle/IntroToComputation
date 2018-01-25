#include <stdio.h>
#include <math.h>

int main() {
    double num, exponent, result;

    printf("Raph's Number Cruncher\n2018 Raphael Restrepo. All rights reserved. \n\nEnter a number: ");
    scanf("%lf", &num);
    printf("Enter an exponent: ");
    scanf("%lf", &exponent);

    result = pow(num, exponent);

    printf("The number %.2f to the power of %.2f is %.2f", num, exponent, result);

    return 0;
}
