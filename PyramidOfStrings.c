#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* recursivePyramid(char* words) {
    char newString[80] = "";
    int leng = strlen(words);
    int counter = 1;
    for(counter = 0; counter < leng; counter++) {
        newString[counter] = words[counter];
    }
    return newString;
}

int main() {
    char* test = recursivePyramid("hello");
    printf("%s", test);
    return 0;
}
