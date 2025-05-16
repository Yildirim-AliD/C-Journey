#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min)
            *min = *(arr + i);
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
}

int main() {
    int *numbers;
    int n, min, max;

    printf("Kaç adet sayı gireceksiniz? ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Bellek ayırma hatası!\n");
        return 1;
    }

    printf("%d adet sayı girin:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. sayı: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findMinMax(numbers, n, &min, &max);

    printf("En küçük sayı: %d\n", min);
    printf("En büyük sayı: %d\n", max);

    free(numbers);

    return 0;
}
