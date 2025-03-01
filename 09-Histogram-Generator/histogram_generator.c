#include <stdio.h>
#define Size 10

int main()
{
    int array[Size] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    printf("İndex\tValue\tHistogram\n");

    for(int i = 0; i < X; i++)  
    {
        printf("%d\t%d\t", i, array[i]);

        for(int j = 0; j < array[i]; j++)
        {
            printf("*"); 
        }
        printf("\n");  
    }

    return 0;
}