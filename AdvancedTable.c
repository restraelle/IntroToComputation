#include <stdio.h>

int main() {
    int number1, number2, number3, number4, number5;
    int width = 10;

    printf("World's Best Table\n\n");

    printf("Type number 1: ");
    scanf("%d", &number1);
    printf("Type number 2: ");
    scanf("%d", &number2);
    printf("Type number 3: ");
    scanf("%d", &number3);
    printf("Type number 4: ");
    scanf("%d", &number4);
    printf("Type number 5: ");
    scanf("%d", &number5);

    printf("%*s|%*s|%*s|%*s|%*s|%*s|\n", width, "", width, "Number1", width, "Number2", width, "Number3", width, "Number4", width, "Number5");
    printf("%*s|%*d|%*d|%*d|%*d|%*d|\n", width, "1x", width, number1, width, number2, width, number3, width, number4, width, number5);
    printf("%*s|%*d|%*d|%*d|%*d|%*d|\n", width, "2x", width, number1*2, width, number2*2, width, number3*2, width, number4*2, width, number5*2);
    printf("%*s|%*d|%*d|%*d|%*d|%*d|\n", width, "3x", width, number1*3, width, number2*3, width, number3*3, width, number4*3, width, number5*3);
    printf("%*s|%*d|%*d|%*d|%*d|%*d|\n", width, "4x", width, number1*4, width, number2*4, width, number3*4, width, number4*4, width, number5*4);
    printf("%*s|%*d|%*d|%*d|%*d|%*d|\n", width, "5x", width, number1*5, width, number2*5, width, number3*5, width, number4*5, width, number5*5);
}
