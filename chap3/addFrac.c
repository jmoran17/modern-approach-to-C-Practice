#include <stdio.h>

int main(void)
{
    int numSum, denomSum, num1, denom1, num2, denom2;

    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    numSum = num1 * denom2 + num2 * denom1;
    
    denomSum = denom1 * denom2;

    printf("The sum is %d/%d\n", numSum, denomSum);

    return 0;

}