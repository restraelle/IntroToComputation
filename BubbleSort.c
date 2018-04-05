#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubbleSort(int* arr, int numOfElements) {
    int i;
    int isSorted = 1;
    int temp = 0;
    do {
        isSorted = 1;
        for(i = 0; i < numOfElements; i++) {
            if(arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                temp = 0;
                isSorted = 0;
            }
        }
    } while(isSorted == 0);
}

int main() {
    int i;
    int numbers[30];
    time_t theTime;
    time(&theTime);
    srand((unsigned)theTime);

    printf("[%-10s]", "UNSORTED");
    for(i = 0; i < 30; i++) {
        numbers[i] = rand() % 10;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    bubbleSort(numbers, 30);

    printf("[%-10s]", "SORTED");
    for(i = 0; i < 30; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
