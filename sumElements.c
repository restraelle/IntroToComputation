#include <stdio.h>
#include <stdlib.h>

int sumElements(int arr[], int elements) {
    int sum = 0;
    int a = 0;

    for(a = 0; a < elements; a++) {
        sum += arr[a];
    }
    return sum;
}

int main() {
    int test[7] = {4,2,4,5,6,7,5};

    printf("the sum is %d.", sumElements(test, 7));
    return 0;
}
