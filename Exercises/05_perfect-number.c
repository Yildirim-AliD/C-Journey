#include <stdio.h>


int perfect_number(int n)
{
    int sum = 0;
    for(int i = 1 ; i <= n/2;i++)
        if(n % i == 0)
            sum += i;
            
    return sum;
}

void is_perfect(int n)
{
    int sum = perfect_number(n);
    if(n == sum) printf("%d is a perfect number",n);
    else printf("%d isn't a perfect number",n);
    
}

int main()
{
    int number;
    printf("enter a valid: ");
    scanf("%d",&number);
    
    is_perfect(number);
    
    return 0;
}