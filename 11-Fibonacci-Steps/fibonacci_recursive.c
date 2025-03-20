#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");

        return 1;
    }

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%llu ", fibonacci(i));
    }
    printf("\n");



    return 0;
}
