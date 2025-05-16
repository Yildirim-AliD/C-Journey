#include <stdio.h>

int main()
{
    int number;
    printf("Enter a five-digit number: ");
    scanf("%d",&number);
    if (number < 10000 || number > 99999) {
        printf("Please enter a five-digit number!\n");
        return 1;
    }
    
    int num1 = number/10000;
    int num2 = (number/1000) % 10;
    int num3 = (number/100) % 10;
    int num4 = (number/10) % 10;
    int num5 = number % 10;
    
    printf("%d\t%d\t%d\t%d\t%d\t",num1,num2,num3,num4,num5);
    
    return 0;
}
