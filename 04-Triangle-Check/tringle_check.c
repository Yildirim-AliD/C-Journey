#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,num3;
    printf("Please Enter 3 values: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    
    if(num1+num2>num3 && num3 > fabs(num1-num2) &&
    num1+num3>num2 && num2 > fabs(num3-num1) &&
    num3+num2>num1 && num1 > fabs(num2-num3))
    {
        printf("Yes,a triangle can be formed with these 3 values\n");
        return 0;
        
    }else{
        printf("No,a triangle cannot be formed with these values\n");
        return 1;
    }
}