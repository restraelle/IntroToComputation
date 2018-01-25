#include <stdio.h>
#include <math.h>

int main() {
    double radius, result;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    result = 3.14 * radius * radius;
    printf("The area of your circle is %f.", result);

    return 0;
}
