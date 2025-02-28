#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,num3;
    printf("3 değer giriniz: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    
    if(num1+num2>num3 && num3 > fabs(num1-num2) &&
    num1+num3>num2 && num2 > fabs(num3-num1) &&
    num3+num2>num1 && num1 > fabs(num2-num3))
    {
        printf("evet üçgendir\n");
        return 0;
        
    }else{
        printf("hayır üçgen değildir\n");
        return 1;
    }
}