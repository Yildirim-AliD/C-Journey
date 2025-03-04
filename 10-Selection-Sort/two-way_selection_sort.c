#include <stdio.h>
#define SIZE 16

int main()
{
    int array[SIZE] = {55, 23, 78, 12, 98, 67, 45, 89, 34, 21, 43, 56, 90, 11, 62, 73};
    int left, right, min_index, max_index, temp;

    for (left = 0, right = SIZE - 1; left < right; left++, right--)
    {
        min_index = left;
        max_index = right;

        for (int i = left; i <= right; i++)
        {
            if (array[i] < array[min_index])
                min_index = i;
            if (array[i] > array[max_index])
                max_index = i;
        }

        temp = array[left];
        array[left] = array[min_index];
        array[min_index] = temp;

        if (max_index == left)
            max_index = min_index;

        temp = array[right];
        array[right] = array[max_index];
        array[max_index] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}