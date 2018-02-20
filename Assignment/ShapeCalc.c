#include <stdio.h>
#include <iso646.h>
#include <math.h>
#include <stdbool.h>

int main() {
    // defining vars for user confirmation
    char correctInput[1];
    bool isCorrect = false;

    // defining the variables used to collect data from the user
    double circleRadius;
    double rectangleWidth;
    double rectangleHeight;
    double rTriangleX;
    double rTriangleY;
    double rTriangleH;

    // defining variables used during calculation
    double areaCircle;
    double areaRectangle;
    double areaRTriangle;

    double perimeterCircle;
    double perimeterRectangle;
    double perimeterRightTriangle;

    double areaSum;
    double areaAvg;
    double perimeterSum;
    double perimeterAvg;

    while(1==1) {
        printf("ShapeCalc v1.0\nCreated by Raphael Restrepo\n");
        // runs in a loop until user confirms that the information is correct
        do {
            // asks the user questions and send answers to variables
            printf("\nWhat's the radius of your circle?: ");
            scanf("%lf", &circleRadius);

            printf("\nWhat is the width of your rectangle?: ");
            scanf("%lf", &rectangleWidth);
            printf("What is the height of your rectangle?: ");
            scanf("%lf", &rectangleHeight);

            printf("\nWhat is the X(adjacent) of your right triangle?: ");
            scanf("%lf", &rTriangleX);
            printf("What is the Y(opposite) of your right triangle?: ");
            scanf("%lf", &rTriangleY);

            // calculates the hypotenuse of the right triangle
            rTriangleH = pow(rTriangleX, 2) + pow(rTriangleY, 2);
            rTriangleH = sqrt(rTriangleH);

            // shows the inputed info to the user to confirm whether its correct
            printf("\nReviewing Info\n\n");
            printf("------------------\n");
            printf("- Circle:\n");
            printf("    Radius    : %lf\n", circleRadius);
            printf("- Rectangle:\n");
            printf("    Width     : %lf\n", rectangleWidth);
            printf("    Height    : %lf\n", rectangleHeight);
            printf("- Right Triangle:\n");
            printf("    X         : %lf\n", rTriangleX);
            printf("    Y         : %lf\n", rTriangleY);
            printf("    Hypotenuse: %lf\n", rTriangleH);

            isCorrect = true;
        } while(isCorrect == false);

        // calculates areas
        areaCircle = M_PI * circleRadius * circleRadius;
        areaRectangle = rectangleWidth * rectangleHeight;
        areaRTriangle = (rTriangleX * rTriangleY)/2;

        // calculates perimeters
        perimeterCircle = 2 * M_PI * circleRadius;
        perimeterRectangle = (rectangleHeight + rectangleWidth) * 2;
        perimeterRightTriangle = rTriangleH + rTriangleX + rTriangleY;

        // calculates sums
        areaSum = areaCircle + areaRectangle + areaRTriangle;
        areaAvg = areaSum / 3;
        perimeterSum = perimeterCircle + perimeterRectangle + perimeterRightTriangle;
        perimeterAvg = perimeterSum / 3;

        // presents the results in a somewhat scientific manner
        printf("\n Alrighty, here are the results!\n\n");

        printf("- Areas:\n");
        printf("    Circle        : %lf\n", areaCircle);
        printf("    Rectangle     : %lf\n", areaRectangle);
        printf("    Right Triangle: %lf\n", areaRTriangle);

        printf("- Perimeter:\n");
        printf("    Circle        : %lf\n", perimeterCircle);
        printf("    Rectangle     : %lf\n", perimeterRectangle);
        printf("    Right Triangle: %lf\n", perimeterRightTriangle);

        printf("\nSum of areas         : %lf", areaSum);
        printf("\nAverage of areas     : %lf", areaAvg);
        printf("\nSum of perimeters    : %lf", perimeterSum);
        printf("\nAverage of perimeters: %lf\n\n", perimeterAvg);
        break;
    }
    return 0;
}
int test(char* text) {

}
