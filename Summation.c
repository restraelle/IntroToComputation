#include <stdlib.h>
#include <stdio.h>

int sigmaSum(int start, int end) {
    int result = 0;
    int initialNum = 0;
    int finalNum = 0;

    if(start > end) {
        initialNum = end;
        finalNum = start;
    } else {
        initialNum = start;
        finalNum = end;
    }
    for(initialNum = initialNum; initialNum <= finalNum; initialNum++) {
        result += initialNum;
    }
    return result;
}

int recursiveSigmaSum(int start, int end) {
    int result = 0;
    if(start <= end) {
        result = start + recursiveSigmaSum(start+1, end);
    }
    return result;
}

int main() {
    int test = recursiveSigmaSum(1, 4);
    printf("%d", test);
    return 0;
}
