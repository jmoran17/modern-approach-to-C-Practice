#include <stdio.h>

int main(void)
{
    int one1, one2, one3, one4, two1, two2, two3, two4, three1, three2, three3, three4, four1, four2, four3, four4;
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one1, &one2, &one3, &one4, &two1, &two2, &two3, &two4, &three1, &three2, &three3, &three4, &four1, &four2, &four3, &four4);

    printf("%d %d %d %d\n",one1, one2, one3, one4);
    printf("%d %d %d %d\n", two1, two2, two3, two4);
    printf("%d %d %d %d\n", three1, three2, three3, three4);
    printf("%d %d %d %d\n", four1, four2, four3, four4);

    int d1Sum = one1 + two2 + three3 + four4;
    int d2Sum = one4 + two3 + three2 + four1;
    int r1Sum = one1 + one2 + one3 + one4;
    int r2Sum = two1 + two2 + two3 + two4;
    int r3Sum = three1 + three2 + three3 + three4;
    int r4Sum = four1 + four2 + four3 + four4;

    int c1Sum = one1 + two1 + three1 + four1;
    int c2Sum = one2 + two2 + three2 + four2;
    int c3Sum = one3 + two3 + three3 + four3;
    int c4Sum = one4 + two4 + three4 + four4;

    printf("Row sums: %d %d %d %d\n", r1Sum, r2Sum, r3Sum, r4Sum);
    printf("Column sums: %d %d %d %d\n", c1Sum, c2Sum, c3Sum, c4Sum);
    printf("Diagonal sums: %d %d\n", d1Sum, d2Sum);

    return 0;
}