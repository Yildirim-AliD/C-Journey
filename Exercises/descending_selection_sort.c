#include <stdio.h>
#define size 16

int main()
{
    int array[size] = {55, 23, 78, 12, 98, 67, 45, 89, 34, 21, 43, 56, 90, 11, 62, 73};
    int temp,max_index;
    
    for(int i = 0;i<size-1;i++)
    {
        max_index = i;
        
        for(int j = i+1;j<size;j++)
        {
            if(array[j] > array[max_index])
            {
                max_index = j;
            }
        }
        
        temp = array[i];
        array[i] = array[max_index];
        array[max_index] = temp;
    }
    
    for(int i = 0;i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}