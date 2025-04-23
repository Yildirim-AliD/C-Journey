#include <stdio.h>

int main()
{
	const float pi = 3.14159;
	float r,*ptr ;
    ptr = &r;
	printf("Please enter the radius value: ");
	scanf("%f",ptr);

	printf("Diameter: %.2f\n",2 * (*ptr));

	printf("Area: %.2f\n",pi * (*ptr) * (*ptr));

	printf("Circumference: %.2f\n",2 * pi * (*ptr));

	return 0;
}