#include <stdio.h>
#include <math.h>
#include <string.h>

void encrypt(char* arg) {
    int counter = 0;
    int stringlength = strlen(arg);
    while(counter < stringlength) {
        arg[counter] = arg[counter]+5;
        counter++;
    }
}
void decrypt(char* arg) {
    int counter = 0;
    int stringlength = strlen(arg);
    while(counter < stringlength) {
        arg[counter] = arg[counter]-5;
        counter++;
    }
}

int main() {
    char text[100] = "";
    char reu[100];
    char reu2[100];

    printf("Enter something: ");
    fgets(text, 100, stdin);
    printf("This is what you entered: \n%s\n", text);
    encrypt(text);
    printf("This is what you entered: \n%s\n", text);
    decrypt(text);
    printf("This is what you entered: \n%s", text);
    return 0;
}
