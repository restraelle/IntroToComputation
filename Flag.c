#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>

int main() {
    float x, xCalc;

    while(1==1) {
        printf("[ ] Enter a number: ");
        scanf("%f", &x);

        xCalc = 2*x*x-3*x+5;

        if(xCalc >= 5) {
            printf("[O] %.0f is bigger than 5.\n", xCalc, x);
        } else {
            printf("[X] %.0f is not bigger than 5.\n", xCalc, x);
        }
    }

    return 0;
}
