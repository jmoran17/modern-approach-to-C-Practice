#include <stdio.h>

int main(void)
{
    float amount, total, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * 0.05f;

    total = amount + tax;

    printf("With tax added: %.2f\n", total);
    
    return 0;
}