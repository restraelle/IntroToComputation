#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27
#define KEY_SPACE 32

int main() {
    while(1 == 1) {
        int key = getch();
        if(key == KEY_UP) {
            printf("Go up.\n");
        } else if (key == KEY_DOWN) {
            printf("Go down.\n");
        } else if (key == KEY_LEFT) {
            printf("Go left.\n");
        } else if (key == KEY_RIGHT) {
            printf("Go right.\n");
        } else if (key == KEY_SPACE) {
            printf("Fire!.\n");
        } else if (key == KEY_ESC) {
            break;
        }
    }

    return 0;
}
