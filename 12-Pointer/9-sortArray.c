/*Write a program that generates 6 distinct random numbers
between 1 and 54 and stores them in an array.
Then, print them in sorted order.
The program should use a void function that takes
a pointer as an argument for the sorting operation. 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void sortArray(int *array,int n);
int main()
{
    int array[6];
    srand(time(NULL));
    
    for(int i = 0;i <6;i++)
        array[i] = 1 + rand() % 54;
        
        
    sortArray(array,6);
    
    for(int i = 0; i < 6; i++)
        printf("%d ",array[i]);
        
    return 0;
    
}

void sortArray(int *array,int n)
{
    int min_index,temp;
    for(int i = 0;i<n-1;i++)
    {
        min_index = i;
        for(int j = i+1;j<n;j++)
            if(array[min_index] > array[j])
                min_index = j;
        
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}