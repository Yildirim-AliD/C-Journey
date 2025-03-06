/* A C program that reads 10 numbers from the user
 calculates the average, and stores the numbers smaller than the average in a separate array.
*/

#include <stdio.h>
#define size 10

int main()
{
    int array[size];
    int sum = 0;
    float average;
    int temp[size],k = 0;
    for(int i = 0;i < size;i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    
    average = sum / (float)size;
    
    for(int i = 0;i<size;i++)
    {
        if(array[i] < average)
        {
            temp[k] = array[i];
            k++;    
        }
    }
    for(int j = 0;j < k;j++)
        printf("%d ",temp[j]);
    
    return 0;
    
    
}