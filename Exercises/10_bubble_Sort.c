#include <stdio.h>

void bubbleSort(int dizi[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

void yazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    printf("Siralanmadan once:\n");
    yazdir(dizi, n);

    bubbleSort(dizi, n);

    printf("Siralandiktan sonra:\n");
    yazdir(dizi, n);

    return 0;
}