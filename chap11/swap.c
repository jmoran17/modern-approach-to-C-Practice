#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("%d %d\n", a, b);

}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}