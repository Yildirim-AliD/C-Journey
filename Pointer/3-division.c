/* A function that performs division and prints both the quotient and remainder. */

#include <stdio.h>

int calcDivision(int x,int y,int *remainder)
{
    *remainder = x % y;
    
    return x/y;
}


int main()
{
    int number1,number2,remainder,division;
    printf("Enter a number: ");
    scanf("%d",&number1);
    printf("Enter a number2: ");
    scanf("%d",&number2);
    if(number2 != 0)
        division = calcDivision(number1,number2,&remainder);
    else
    {
        printf("You cannot enter zero for number 2.");
        return 1;
    }
    
    printf("Division=%d and remainder = %d",division,remainder);
    
    return 0;
    
}
