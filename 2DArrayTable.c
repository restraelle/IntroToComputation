#include <stdio.h>
#include <stdlib.h>

int main() {
    int tab[4][3] = {{1,2,3},{3,2,1},{87,65,27},{9,18,59}};
    int row, column;
    printf("       ");
    for(column = 0; column < 3; column++) {
        printf("[%-3d]", column);
    }
    printf("\n");
    for(row = 0; row < 4; row++) {
        printf("[%-5d]", row);
        for(column = 0; column < 3; column++) {
            printf("%-5d", tab[row][column]);
        }
        printf("\n");
    }


    return 0;
}
