#include <stdio.h>

int main(void)
{
    float x, x_squared, x_cubed, x_fourth, x_fifth, value;
    
    printf("Enter a value for X: ");
    scanf("%f", &x);

    x_squared = x * x;
    x_cubed = x * x * x;
    x_fourth = x * x * x * x;
    x_fifth = x * x * x * x * x;

    // value = 3 * x_fifth + 2 * x_fourth - 5 * x_cubed - x_squared + 7 * x - 6;
    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 with your value is \n");
    printf("%f \n", value);

    return 0;
}