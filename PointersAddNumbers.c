#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, result;
    float* pNum1 = &num1;
    float* pNum2 = &num2;
    float* pResult = &result;
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter a number: ");
    scanf("%f", &num2);

    *pResult = *pNum1 + *pNum2;

    printf("The sum of the two numbers is %f", *pResult);

    return 0;
}
