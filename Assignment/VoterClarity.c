#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tableNames[5][60] = {"John Cole", "Anne Drake", "Alex Wood", "Mary Lee", "Ethan Barn"};
int tableVotes[5] = {0, 0, 0, 0, 0};

char tableSortedNames[5][60];
int tableSortedVotes[5] = {0, 0, 0, 0, 0};

int voteCounter = 0;
int i = 0;
int b = 0;
int voters = 0;

char holdName[60] = "";
int holdVotes = 0;
int holdCounter = 5;
void vote(int candidate) {
    tableVotes[candidate] += 1;
    voteCounter++;
}

int main() {
    printf("VoterClarity Poll Simulation v1.0\nCreated by Raphael Restrepo\n\n");
    printf("Candidates: \n");
    for(i = 0; i < 5; i++) {
        printf("- %s\n", tableNames[i]);
    }
    printf("Enter the number of voters: ");
    scanf("%d", &voters);

    for(i = 0; i < voters; i++) {
        vote(rand() % 5);
    }

    for(i = 0; i < 5; i++) {
        for(b = holdCounter; b >= 0; b--) {
            if(tableVotes[b] > holdVotes) {
                holdVotes = tableVotes[b];
                strcpy(holdName, tableNames[b]);
            }
        }

        strcpy(tableSortedNames[i], holdName);
        tableSortedVotes[i] = holdVotes;
        holdVotes = 0;
        holdCounter--;
    }

    printf("%-15s%-15s%-15s%-15s\n", "Rank", "Candidate", "Votes", "Percentage");

    for(i = 0; i < 5; i++) {
        printf("%-15d%-15s%-15d%-15.2f%%\n", i+1, tableSortedNames[i], tableSortedVotes[i], ((float)tableSortedVotes[i]/(float)voters)*100);
    }


    return 0;
}
