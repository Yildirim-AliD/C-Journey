/* A function that calculates the area and perimeter of a circle */
#include <stdio.h>

const float pi = 3.14;

float calcCircle(float r, int *area)
{
    *area = pi * r * r;
    return 2 * pi * r;
}

int main()
{
    float r, perimeter;
    int area = 0;

    printf("Enter a radius to circle: ");
    scanf("%f", &r);

    perimeter = calcCircle(r, &area);

    printf("Area: %d \nPerimeter: %.2f\n", area, perimeter);

    return 0;
}
