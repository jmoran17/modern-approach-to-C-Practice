#include <stdio.h>

int main(void)
{
    float loan_amount, interest, monthly_pay, remaining;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);
    
    float monthly_interest = (interest/100) / 12;

    remaining = (loan_amount - monthly_pay) + (loan_amount * monthly_interest);

    printf("Balance remaining after first payment: %.2f\n", remaining);

    remaining = (remaining - monthly_pay) + (remaining * monthly_interest);
    
    printf("Balance remaining after second payment: %.2f\n", remaining);

    remaining = (remaining - monthly_pay) + (remaining * monthly_interest);

    printf("Balance remaining after third payment: %.2f\n", remaining);

    return 0;
}