#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    
    printf("Enter two integers:\n");
    scanf("%d %d", ptr1, ptr2);
    
    printf("Sum: %d\n", *ptr1 + *ptr2);

    printf("Difference: %d\n",*ptr1 - *ptr2);

    printf("Product: %d\n",(*ptr1) * (*ptr2));

    if (*ptr2 != 0) {
        printf("Quotient: %d\n", (*ptr1) / (*ptr2));
        printf("Remainder: %d\n", (*ptr1) % (*ptr2));
    } else {
        printf("Division and modulo operation are not possible with zero!\n");
    }
    
    return 0; 
}