/*
    Math Functions Test
    Created by Raphael Restrepo
    Assignment 4
    Dr. Ricardo Rangel
*/

#include <stdlib.h>
#include <stdio.h>

// function that checks argument if prime
int isPrime(int num) {
    int counter;
    int test = 0;
    // checks if the number is divisible by every number starting from num
    for(counter = num-1; counter > 1; counter--) {
        if(num % counter == 0) {
            return 0;
        }
    }
    return 1;
}

// function that check argument if odd
int isOdd(int num) {
    // if the remainder is greater than 0, it does not divide evenly, thus being odd
    if(num % 2 >= 1) {
        return 1;
    } else {
        return 0;
    }
}

// function that returns num to the power of pow
int power(int num, int pow) {
    int result = 1;
    int a = 0;
    for(a = 0; a < pow; a++) {
        result = result * num;
    }
    return result;
}

int main() {
    int a = 0;
    // printing title bar
    printf("%-17s|%-15s|%-15s|%-15s|%-15s|\n", "Odd Prime Number", "Power of 0", "Power of 1", "Power of 2", "Power of 3");

    // printing data
    for(a = 1; a <= 100; a++) {
        if(isPrime(a) == 1 && isOdd(a) == 1) {
           printf("%17d|%15d|%15d|%15d|%15d|\n", a, power(a, 0), power(a, 1), power(a, 2), power(a, 3));
        }
    }
}
