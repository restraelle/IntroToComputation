#include <stdio.h>
#include <math.h>


int main() {
    double x1, y1, x2, y2;

    double x, y, newX, newY, added, result;

    printf("Get x for first point: ");
    scanf("%lf", &x1);
    printf("Get y for first point: ");
    scanf("%lf", &y1);
    printf("Get x for second point: ");
    scanf("%lf", &x2);
    printf("Get y for second point: ");
    scanf("%lf", &y2);

    x = (x2 - x1);
    y = (y2 - y1);

    newX = x * x;
    newY = y * y;

    added = newX + newY;

    result = sqrt(added);

    printf("The result is %f.", result);
}
