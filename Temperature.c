#include <stdio.h>
#include <iso646.h>

int main() {
    double temperature = 0;

    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    if((temperature >= 50)&&(temperature <= 100)&& (temperature != 80)) {
        printf("The temperature is %f and it's all good.", temperature);
    }

    return 0;
}
