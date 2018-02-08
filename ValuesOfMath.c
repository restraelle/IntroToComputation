#include <stdio.h>
#include <math.h>

int main() {
    int counter = 5;
    int calc = 0;

    do {
        calc = (counter * counter) - (3 * counter) + 5;
        printf("%d, %d\n", counter, calc);
    } while(counter++ < 80);

    return 0;
}
