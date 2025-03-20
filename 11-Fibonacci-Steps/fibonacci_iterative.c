#include <stdio.h>

void fibonacci(int n) {
    unsigned long long a = 0, b = 1, next;
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%llu ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(n);
    }
    
    return 0;
}
