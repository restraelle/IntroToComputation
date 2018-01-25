#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, resultX, resultY;
    printf("Enter coordinate 1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinate 2: ");
    scanf("%lf %lf", &x2, &y2);

    resultX = (x1 + x2)/2;
    resultY = (y1 + y2)/2;

    printf("The mid point is at %.1f, %.1f.", resultX, resultY);
    return 0;
}
