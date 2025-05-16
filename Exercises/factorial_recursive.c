#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return (unsigned long long)n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number for the factorial calculation: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Result: %llu\n", factorial(number));
    }

    return 0;
}
