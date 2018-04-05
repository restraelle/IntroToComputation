/**

    Assignment 6
    created by Raphael Restrepo
    for Dr. Rangel
    4/5/2018

**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char tableNames[5][60] = {"John Cole", "Anne Drake", "Alex Wood", "Mary Lee", "Ethan Barn"};
int tableVotes[5] = {0, 0, 0, 0, 0};

char tableSortedNames[5][60];
int tableSortedVotes[5] = {0, 0, 0, 0, 0};

int voteCounter = 0;
int voters = 0;

int i = 0;
int temp = 0;

time_t theTime;

// returns the position of the greatest element
int returnHighestPosition(int* arr, int numOfElem) {
    // local vars to store value and position
    int highest = 0;
    int highestPos = 0;
    int i;

    // checks for each element of the array if its higher than the temp value and replaces it
    for(i = 0; i < numOfElem; i++) {
        if(arr[i] > highest) {
            highest = arr[i];
            highestPos = i;
        }
    }

    return highestPos;
}

// puts vote in for the candidate in the argument and increments total vote counter
void vote(int candidate) {
    tableVotes[candidate] += 1;
    voteCounter++;
}

int main() {
    // seeding the pseudorandom function
    time(&theTime);
    srand((unsigned)theTime);

    printf("VoterClarity Poll Simulation v1.0\nCreated by Raphael Restrepo\n\n\"May the odds be ever in your favor.\"\n\n");
    printf("Candidates: \n");

    // prints the candidate names
    for(i = 0; i < 5; i++) {
        printf("- %s\n", tableNames[i]);
    }

    // asks the user for the number of voters
    printf("\nEnter the number of voters: ");
    scanf("%d", &voters);

    // this part does the random voting based on how many voters
    for(i = 0; i < voters; i++) {
        vote(rand() % 5);
    }

    // sorts the array then sets the original array element to nul
    for(i = 0; i < 5; i++) {
        temp = returnHighestPosition(tableVotes, 5);
        tableSortedVotes[i] = tableVotes[temp];
        strcpy(tableSortedNames[i], tableNames[temp]);

        tableVotes[temp] = 0;
        strcpy(tableNames[temp], "");
    }

    printf("\nThe results are in!\n");
    printf("%-15s%-15s%-15s%-15s\n", "Rank", "Candidate", "Votes", "Percentage");

    // prints the dotted line
    for(i = 0; i < 61; i++) {
        printf("-");
    }
    printf("\n");

    //prints the table with all of the data
    for(i = 0; i < 5; i++) {
        printf("%-15d%-15s%-15d%-15.1f%%\n", i+1, tableSortedNames[i], tableSortedVotes[i], ((float)tableSortedVotes[i]/(float)voters)*100);
    }

    return 0;
}
