#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char letter = 'a'-1;

char getSequentialLetter() {
    if(letter+1 > 'z'){
        letter = 'a';
    } else {
        letter++;
    }
}

int main() {
    int a;
    for(a = 1; a < 100; a++) {
        getSequentialLetter();
        printf("%c", letter);
    }
    return 0;
}
