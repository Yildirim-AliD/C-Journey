#include <stdio.h>

int main( )
{
    
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
   
   for ( int i = 0 ; i <= 6 ; i++ )
   {
     printf("\nval[%d]: degeri %d ve adresi %p", i, val[i], &val[i]);
   }
   
   
  return 0;
}
