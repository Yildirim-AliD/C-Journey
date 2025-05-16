#include <stdio.h>

int main()
{
	const float pi = 3.14159;
	float r ;

	printf("Please enter the radius value: ");
	scanf("%f",&r);

	printf("Diameter: %.2f\n",2 * r);

	printf("Area: %.2f\n",pi * r * r);

	printf("Circumference: %.2f\n",2 * pi * r);

	return 0;
}