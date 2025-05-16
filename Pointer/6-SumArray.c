/* A program that calculates the sum of array elements by using the starting address of the first element */

#include<stdio.h>

int sumArray(int a[],int n)
{
    int *p,toplam=0,sayac;
    p=&a[0];
    for(sayac=0;sayac<n;sayac++)
	    toplam+=*(p+sayac);
	    
    return toplam;
}


int main()
{
    int number[10]={1,2,3,4,5,6,7,8,9,10};
    int f;
    f=sumArray(number,10);
    for(int i = 0;i<10;i++)
        printf("%d ",number[i]);
        
    printf("\nSum = %d",f);
    
    return 0;
}
