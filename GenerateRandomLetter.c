#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char generateRandomLetter() {
    return 'a' + rand() % 26;
}

int main() {
    char letter = 'a';
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);
    letter = generateRandomLetter();
    printf("%c", letter);



    return 0;
}
