#include <stdio.h>

int main() {
    char letter = 'a';
    int counter = 1;

    do {
        printf("%c", letter);
        letter++;
        counter++;
    } while(counter <= 26);

    return 0;
}
