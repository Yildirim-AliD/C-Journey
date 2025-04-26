/* Write a C program where a value x given in the main() function is passed to a function named f,
where f(x) = 3x - 1 is calculated and then this value is sent to another function named g,
where g(x) = x² + 2x - 3 is calculated.
Finally, print the result in the main() function.

Note: The program must use call by address (pass by pointer).
*/

#include <stdio.h>

void g(int *y)
{
    *y = (*y) * (*y) + 2 * (*y) - 3;
}

void f(int *x)
{
    *x = 3 * (*x) - 1;
    g(x);
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    f(&x);

    printf("Result: %d\n", x);

    return 0;
}