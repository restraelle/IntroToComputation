#include <stdio.h>
#include <math.h>

double inputDouble() {
    double ret;
    printf("Enter a number: ");
    scanf("%lf", &ret);
    return ret;
}
void calculateDistance(double x1, double y1, double x2, double y2) {
    double result;
    double point1 = x2 - x1;
    double point2 = y2 - y1;

    double calc1 = point1 * point1;
    double calc2 = point2 * point2;

    result = sqrt(calc1 + calc2);

    printf("Distance: %f", result);

}

int main() {
    double x1 = inputDouble();
    double y1 = inputDouble();
    double x2 = inputDouble();
    double y2 = inputDouble();
    calculateDistance(x1, y1, x2, y2);
}


