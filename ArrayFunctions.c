#include <stdlib.h>
#include <stdio.h>

int showArray(int arr[], int elements) {
    int a = 0;
    for(a = 0; a < elements; a++) {
        printf("%d\n", arr[a]);
    }
}

int sumElements(int arr[], int elements) {
    int sum = 0;
    int a = 0;

    for(a = 0; a < elements; a++) {
        sum += arr[a];
    }
    return sum;
}

int copyArray(int sourceArr[], int targetArr[], int elements) {
    int a = 0;
    for(a = 0; a < elements; a++) {
        targetArr[a] = sourceArr[a];
    }
}

int main() {
    int source[5] = {1,2,3,4,6};
    int target[5];

    copyArray(source, target, 5);
    showArray(target, 5);
}
