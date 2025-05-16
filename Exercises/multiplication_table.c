#include <stdio.h>

int main()
{
    int range,i,j;
    printf("Enter the range for the multiplication table: ");
    scanf("%d",&range);
    
    for(i=1;i<=range;i++)
    {
        printf("%2d |",i);
        for(j=1;j<=range;j++)
        {
            printf("%5d",i*j);
        }
        printf("\n");
    }
    return 0;
}