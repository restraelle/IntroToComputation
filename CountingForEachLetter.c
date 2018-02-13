#include <stdio.h>

int main() {
    int counter = 1;
    int character = 'a';
    do {
        printf("%c:", character);
        while(counter <= 10) {
            printf(" %d", counter);
            if(counter < 10) {
                printf(",");
            }
            counter++;
        }
        printf("\n");
        counter = 1;
        character++;
    } while(character <= 'z');
    return 0;
}
