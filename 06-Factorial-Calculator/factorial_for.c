#include <stdio.h>

int main()
{
    int fact = 1,number,i;
    
    printf("Please enter the value for which you want to calculate the factorial: ");
    scanf("%d",&number);
    
    int original = number;
    for(i=1;i<=number;i++)
    {
        fact *=i;
    }
    
    printf("\n%d! = %d\n", original, fact);
    
    return 0;
}