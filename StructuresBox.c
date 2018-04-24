#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Box {
    int point1[2];
    int point2[2];
};

int main() {

    struct Box b1;

    int combinedX;
    int combinedY;

    int distance;

    b1.point1[0] = 0;
    b1.point1[1] = 0;

    b1.point2[0] = 5;
    b1.point2[1] = 5;


    combinedX = pow((b1.point2[0] - b1.point1[0]), 2);
    combinedY = pow((b1.point2[1] - b1.point1[1]), 2);

    distance = sqrt(combinedX + combinedY);

    printf("The distance between the two points is %d.", distance);
    return 0;
}
