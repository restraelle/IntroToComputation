#include <stdlib.h>
#include <stdio.h>

int getPos(char* arr, char element, int numofelements) {
    int i;
    for(i = 0; i < numofelements; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int i;
    char alphabet[60] = "abcdefghijklmnopqrstuvwxyz";
    char vowels[6] = "aeiouy";

    for(i = 0; i < 6; i++) {
        printf("%c is at position %d.\n", vowels[i], getPos(alphabet, vowels[i], 60));
    }

    return 0;
}
