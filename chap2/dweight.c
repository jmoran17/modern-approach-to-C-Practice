#include <stdio.h>
//compute the dimensional weight of a 12" x 10" x 8" box
int main(void)
{
    int height, length, width, weight, volume;
    printf("Enter the height of box: ");
    scanf("%d", &height);
    printf("Enter the length of box: ");
    scanf("%d",&length);
    printf("Enter the width of box: ");
    scanf("%d", &width);
    //calculate the volume of the box
    volume = height * length * width;
    //calculate the dimensional weight of the box
    weight = (volume + 165) / 166;
    //print results
    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

}