#include <stdio.h>

int main(void)
{   


    int GS1, group, pub, item, digit;
    printf("Enter ISBN: " );
    scanf("%d-%d-%d-%d-%d", &GS1, &group, &pub, &item, &digit);

    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", pub);
    printf("Item Number: %d\n", item);
    printf("Check digit: %d\n", digit);

    return 0;
}