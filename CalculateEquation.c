#include <math.h>
#include <stdio.h>

double getDouble() {
    double result;
    scanf("%lf", &result);
    return result;
}

int main() {
    double x, exp, c, result;

    printf("Enter x: ");
    x = getDouble();

    printf("Enter exp: ");
    exp = getDouble();

    printf("Enter c: ");
    c = getDouble();

    result = 2 * pow(x, exp);
    result += c;

    printf("The result is %.1f.", result);

    return 0;
}
