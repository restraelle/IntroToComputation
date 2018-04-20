#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[6] = {1, 2, 4, 5, 3, 2};
    int i = 0;

    for(i = 0; i < 6; i++) {
        printf("%d\n", *(numbers+i));
    }
    return 0;
}
