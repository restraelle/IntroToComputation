#include <stdio.h>
#include <stdlib.h>

int main() {
    int tries = 0;
    //int pDiceRolls[6] = {0, 0, 0, 0, 0, 0};
    int* pDiceRolls;
    pDiceRolls = (int*) malloc(6 * sizeof(int));


    int i = 0;
    printf("Enter the number of rolls for the dice: ");
    scanf("%d", &tries);

    // clean the array
    for(i = 0; i < 6; i++) {
        *(pDiceRolls + i) = 0;
    }

    for(i = 0; i < tries; i++) {
        int temp = (rand() % 7) -1;
        (*(pDiceRolls + temp))++;
    }
    for(i = 0; i < 6; i++) {
        printf("Times that side %d was rolled: %d\n", i, (*(pDiceRolls + i)));
    }

    if(pDiceRolls) free(pDiceRolls);

    return 0;
}
