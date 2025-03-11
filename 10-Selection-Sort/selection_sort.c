#include <stdio.h>
#define size 10

int main()
{
    int array[size] = {2,6,4,8,10,12,89,68,45,37};
    int temp,min_index;
    for(int i = 0;i<size-1;i++)
    {
        min_index = i;
        for(int j = i+1;j<size;j++)
        {
            if(array[j] < array[min_index])
                min_index = j;
        }
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    
    for(int i = 0; i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
