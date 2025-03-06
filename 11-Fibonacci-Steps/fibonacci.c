#include <stdio.h>

int main()
{
    int i = 1, j = 1, sum, n;

    printf("How many steps will the Fibonacci series be calculated? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    printf("Fibonacci series: ");

    if (n >= 1)
        printf("%d ", i); 
    if (n >= 2)
        printf("%d ", j);

    for (int k = 3; k <= n; k++) 
    {
        sum = i + j;
        printf("%d ", sum);
        i = j;
        j = sum;
    }

    printf("\n");
    
    return 0;
}