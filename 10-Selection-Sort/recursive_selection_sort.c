#include <stdio.h>
#define SIZE 16

void recursiveSelectionSort(int array[], int start, int size)
{
    if (start >= size - 1) 
        return;

    int min_index = start;
    
    
    for (int i = start + 1; i < size; i++)
    {
        if (array[i] < array[min_index])
            min_index = i;
    }

    
    int temp = array[start];
    array[start] = array[min_index];
    array[min_index] = temp;

    
    recursiveSelectionSort(array, start + 1, size);
}

int main()
{
    int array[SIZE] = {55, 23, 78, 12, 98, 67, 45, 89, 34, 21, 43, 56, 90, 11, 62, 73};

    recursiveSelectionSort(array, 0, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("%d ",array[i]);

    return 0;
}
