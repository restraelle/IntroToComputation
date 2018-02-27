#include <time.h>
#include <math.h>
#include <stdio.h>

int main() {
    int number;
    time_t cTime;

    time(&cTime);
    srand((unsigned)cTime);

    number = rand() % 200;
    printf("%d", number);

    return 0;
}
