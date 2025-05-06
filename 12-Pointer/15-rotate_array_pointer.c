#include <stdio.h>

#define SIZE 5

void rotateRight(int *array, int steps) {
    int *p = array;
    int temp, i, j;
    for (i = 0; i < steps; i++) {
        temp = *(p + SIZE - 1);

        for (j = SIZE - 1; j > 0; j--) {
            *(p + j) = *(p + j - 1);
        }

        *p = temp;
    }
}

void printArray(int *array) {
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int steps;

    printf("Kaç adım sağa döndürmek istiyorsunuz? ");
    scanf("%d", &steps);

    steps = steps % SIZE; 

    rotateRight(arr, steps);

    printf("Dönen dizi:\n");
    printArray(arr);

    return 0;
}
