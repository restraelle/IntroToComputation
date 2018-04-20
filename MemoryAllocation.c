#include <stdio.h>
#include <stdlib.h>

int main() {

    char* alphabet;
    int i = 0;
    alphabet = (char*) malloc(26 * sizeof(char));

    if(alphabet == NULL) {
        exit(69);
    }

    for(i = 0; i < 26; i++) {
        *(alphabet + i) = 'a' + i;
    }

    printf("%s", alphabet);

    if(alphabet) {
        free(alphabet);
        printf("\nMemory deallocated.");
    }

    return 0;
}
