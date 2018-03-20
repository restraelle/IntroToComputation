#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    time_t timer;
    time(&timer);
    srand((unsigned)timer);

    int counterTotal;
    int counter[6] = {0, 0, 0, 0, 0, 0};
    int index = 0;
    int tries = 0;
    float counterPercent[6] = {0.0, 0.0, 0.0, 0.0, 0.0};

    printf("Enter the number of dice rolls: ");
    scanf("%d", &tries);
    printf("%d\n", tries);
    int diceRolls[tries];

    for(index = 0; index < tries; index++) {
        diceRolls[index] = (rand() % 6)+1;
        counter[diceRolls[index]-1] += 1;
        printf("Roll %d is %d.\n", index, diceRolls[index]);
    }

    for(index = 0; index < 6; index++) {
        counterPercent[index] = (float)counter[index]/(float)tries;
        printf("Percent of tries that rolled %d: %.2f\n", index+1, counterPercent[index]);
    }

    return 0;
}
