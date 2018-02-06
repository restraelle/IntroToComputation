#include <stdio.h>

int main() {
    int grade;
    char letter;
    while(1==1) {
        printf("Enter your grade: ");
        scanf("%d", &grade);

        if(grade >= 90 && grade < 100) {
            printf("A\n");
        } else if(grade >= 80 && grade <= 89) {
            printf("B\n");
        } else if(grade >= 70 && grade <= 79) {
            printf("C\n");
        } else if(grade >= 60 && grade <= 69) {
            printf("D\n");
        } else if(grade <= 59) {
            printf("F\n");
        }

        letter = (grade >= 0) ? 'F' : 0;
        letter = (grade >= 59) ? 'D' : 'F';
        letter = (grade >= 69) ? 'C' : 'D';
        letter = (grade >= 79) ? 'B' : 'C';
        letter = (grade >= 89) ? 'A' : 'B';
        printf("%c\n", letter);
    }

    return 0;
}
