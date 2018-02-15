#include <stdio.h>

int main() {
    for(int y = 0; y < 20; y++) {
        for(int x = 0; x < 20; x++) {
            printf("X: %-5d    Y: %-5d   ALTITUDE: %-5d\n", x, y, 2*x+3*y-2);
        }
    }
    return 0;
}
