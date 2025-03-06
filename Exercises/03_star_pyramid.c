/*  *
    **
    ***
    ****
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for(int i = 1;i <= n;i++)
    {
        for(int j = 0; j < i;j++)
            printf("* ");
        
        printf("\n");
    }

    /*  ****
        ***
        **
        *
    */
    int x;
    printf("Enter the number of rows: ");
    scanf("%d",&x);
    
    for(int i = x;i > 0;i--)
    {
        for(int j = 0; j < i;j++)
            printf("* ");
        
        printf("\n");
    }
    return 0;
}