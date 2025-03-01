#include <stdio.h>

int main()
{
    int number, temp = 1;
    
    printf("Please enter the value for which you want to calculate the factorial: ");
    scanf("%d", &number);
    
    int original = number;

    if (number == 0 || number == 1)
    {
        printf("\n%d! = 1\n", number);
        return 0;
    }

    while (number >= 1)
    {
        temp *= number;
        number--;
    }

    printf("\n%d! = %d\n", original, temp);
    
    return 0;
}
