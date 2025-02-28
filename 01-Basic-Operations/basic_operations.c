#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);
    
    printf("Sum: %d\n", num1 + num2);

    printf("Difference: %d\n",num1 - num2);

    printf("Product: %d\n",num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Division and modulo operation are not possible with zero!\n");
    }
    
    return 0; 
}
