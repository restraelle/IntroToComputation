#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27
#define KEY_SPACE 32

int a = 0;
int b = 0;
int characterPos[2] = {3, 0};
int gridWidth = 15;
int gridHeight = 10;

int movingUp = 0;
int movingDown = 0;
int movingLeft = 0;
int movingRight = 0;

void load() {

}
void drawTop() {
    printf("# GAME ");
    for(a = 0; a < gridWidth-7; a++) {
        printf("#");
        if(a == (gridWidth-8)) {
            printf("\n");
        }
    }
}
void drawBottom() {
    for(a = 0; a < gridWidth; a++) {
        printf("#");
        if(a == (gridWidth-1)) {
            printf("\n");
        }
    }
}
void update() {
    drawTop();
    if(movingUp > 0) {
        characterPos[1] = characterPos[1] - 1;
    } else if(movingDown > 0) {
        characterPos[1] = characterPos[1] + 1;
    } else if(movingLeft > 0) {
        characterPos[0] = characterPos[0] - 1;
    } else if(movingRight > 0) {
        characterPos[0] = characterPos[0] + 1;
    }
    for(b = 0; b < gridHeight; b++) {
        for(a = 0; a < gridWidth; a++) {
            if(characterPos[0] == a && characterPos[1] == b) {
                printf("8");
            } else {
                printf(" ");
            }
            if(a == gridWidth-1) {
                printf("\n");
            }
        }
    }
    drawBottom();
}

int main() {
    int key = 0;
    int msec = 0;
    int trigger = 500;
    int iterations = 0; /* 10ms */
    int cue = 0;
    clock_t before = clock();
    load();

    while(1 == 1) {
        if(cue == 0) {
            printf("This has happened %d times.\n", iterations);
            update();
            cue = 1;
            key = getch();
            if(key == KEY_UP) {
                movingUp = 1;
            } else if (key == KEY_DOWN) {
                movingDown = 1;
            } else if (key == KEY_LEFT) {
                movingLeft = 1;
            } else if (key == KEY_RIGHT) {
                movingRight = 1;
            } else if (key == KEY_SPACE) {
                printf("Fire!.\n");
            } else if (key == KEY_ESC) {
                break;
            }
        }
        clock_t difference = clock() - before;
        msec = difference * 1000 / CLOCKS_PER_SEC;
        if(msec > trigger) {
            cue = 0;
            before = clock();
            msec = 0;
            iterations++;
        }

    }
    printf("Time taken %d seconds %d milliseconds (%d iterations)\n", msec/1000, msec%1000, iterations);
    return 0;
}
