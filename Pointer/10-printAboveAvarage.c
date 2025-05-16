/*Write a code that takes an array from the user,
calculates its average, and prints the values above the average.*/

#include <stdio.h>

void inputArray(int *arr, int size);
float calculateAverage(int *arr, int size);
void printAboveAverage(int *arr, int size, float average);

int main() {
    int numbers[100], n;
    
    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    inputArray(numbers, n);

    float avg = calculateAverage(numbers, n);
    printf("Average: %.2f\n", avg);

    printf("Numbers above the average:\n");
    printAboveAverage(numbers, n, avg);

    return 0;
}

void inputArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d. Enter a number: ", i + 1);
        scanf("%d", arr + i);
    }
}

float calculateAverage(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (float)sum / size;
}

void printAboveAverage(int *arr, int size, float average) {
    for(int i = 0; i < size; i++) {
        if (*(arr + i) > average) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}