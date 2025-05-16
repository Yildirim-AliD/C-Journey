#include <stdio.h>

void cube(int *aPtr) {
    *aPtr = (*aPtr) * (*aPtr) * (*aPtr);
}

int main() {
    int number = 5;
    printf("number: %d\n", number);
    cube(&number);
    printf("new number: %d\n", number);
    return 0;
}
