/*
      * 
    * * * 
  * * * * * 
  * * * * * 
    * * * 
      * 

*/

#include <stdio.h>

int main()
{
    int rows,space, k = 0;
    
    printf("rows; ");
    scanf("%d",&rows);
    
    //i<=rows + 1;
    for(int i = 1; i<=rows; ++i,k = 0)
    {
        for(space = 0; space <=rows-i;++space)
            printf("  ");
            
        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    
    
    for(int i = rows; i>=1;--i,k = 0)
    {
        for(space = 0; space <=rows-i;++space)
            printf("  ");
        
        k = 0;
        while( k != 2*i -1)
        {
            printf("* ");
            k++;
        }
        
        printf("\n");
    }
    return 0;
}