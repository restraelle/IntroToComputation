#include <stdio.h>
#include <iso646.h>

int main() {
    double temperature = 0;

    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    if(!(temperature >= 50 && temperature <= 100)) {
        printf("The temperature is in range and it's all good.", temperature);
    }

    return 0;
}
