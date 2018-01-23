#include <stdio.h>

int main() {
    char firstName[20];
    char lastName[20];

    printf("Enter first name: ");
    gets(firstName);
    printf("Enter last name: ");
    gets(lastName);

    printf("Your name is %s %s.", firstName, lastName);
    return 0;
}
