#include <stdlib.h>
#include <stdio.h>

void printArray(int* array, int elements) {
    int a = 0;
    for(a = 0; a < elements; a++) {
        printf("%d ", array[a]);
    }
    printf("\n");
}

int main() {

    int array1[10] = {2,6,20,42,66,32,14,90,68,10};
    int array2[10] = {3,5,21,41,67,31,13,89,69,9};
    int array3[10];
    int a = 0;

    printf("First array: ");
    printArray(array1, 10);

    printf("Second array: ");
    printArray(array2, 10);

    for(a = 0; a < 10; a++) {
        array3[a] = array1[a] + array2[a];
    }

    printf("Sum of array 1 and 2: ");
    printArray(array3, 10);

    return 0;
}
