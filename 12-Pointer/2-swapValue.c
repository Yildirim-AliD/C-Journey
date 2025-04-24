/*A program that swaps two numbers using a function named
"swap two numbers" and prints the result in the main() function.
*/

#include <stdio.h>

void swapValue(int *number1, int *number2)
{
    int temp = *number1;
    
    *number1 = *number2;
    *number2 = temp;
}

int main()
{
    int num1,num2;
    printf("Enter a number1: ");
    scanf("%d",&num1);
    printf("Enter a number2: ");
    scanf("%d",&num2);
    
    printf("Number1=%d Number2=%d\n",num1,num2);
    
    swapValue(&num1,&num2);
    
    printf("Number1=%d Number2=%d",num1,num2);
    
    return 0;
}

