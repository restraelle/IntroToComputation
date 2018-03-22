#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char password[100] = "";
    char data[40] = "The house is on the ground";
    char newData[40] = "";
    char newData2[40] = "";
    int counter = 0;
    int passwordLength = 0;
    int dataLength = 0;

    int a = 0;
    printf("Enter a password: ");
    scanf("%s", password);

    passwordLength = strlen(password);
    dataLength = strlen(data);

    printf("There are %d elements in the password.\n", passwordLength);

    for(a = 0; a < dataLength; a++) {
        newData[a] = data[a] + password[counter];
        if(counter < passwordLength) {
            counter++;
        } else {
            counter = 0;
        }
    }

    printf("Encrypted data: %s\n", newData);
    counter = 0;

    for(a = 0; a < dataLength; a++) {
        newData2[a] = newData[a] - password[counter];
        if(counter < passwordLength) {
            counter++;
        } else {
            counter = 0;
        }
    }
    printf("Decrypted data: %s", newData2);
    return 0;
}
