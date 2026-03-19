#include <stdio.h>

int main(void)
{
    float radius, radius_cube, volume;

    printf("enter radius: ");
    scanf("%f", &radius);

    radius_cube = radius * radius * radius;

    volume = (4.0f/3.0f) * 3.14 * radius_cube;

    printf("Volume of a sphere with a radius of %f is %f", radius, volume);

}