#include <stdio.h>

void sumOfDigits(int number, int *sum);

int main() {
    int number, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    sumOfDigits(number, &result);

    printf("Sum of the digits: %d\n", result);

    return 0;
}

void sumOfDigits(int number, int *sum) {
    if (number == 0)
        return;

    *sum += number % 10;         
    sumOfDigits(number / 10, sum); 
}
