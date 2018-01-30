#include <stdio.h>
#include <string.h>

int main() {
    char name[60];

    strcpy(name, "mmmmmmmmmmmmmmmmmm"); // sets a string array to the string
    strlen(name); // returns length of the string excluding string terminator
    strcat(name, " i love it"); // concatenates a string onto a string
    return 0;
}
