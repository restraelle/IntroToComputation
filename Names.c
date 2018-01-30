#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char firstName[30];
    char middleName[30];
    char lastName[30];
    char fullName[60];

    bool isBooleanExist = true;

    printf("What is your first name: ");
    scanf("%s", &firstName);
    printf("What is your middle name: ");
    scanf("%s", &middleName);
    printf("What is your last name: ");
    scanf("%s", &lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, middleName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Your full name is %s. What a nice name.", fullName);

    return 0;
}
