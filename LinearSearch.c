#include <stdlib.h>
#include <stdio.h>
// returns the position
int search(int* arra, int numberOfElements, int value) {
    int i = 0;
    for(i = 0; i < numberOfElements; i++) {
        if(arra[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {6,23,765,44,76};
    printf("765 is at %d.", search(arr, 5, 745));
    return 0;
}
