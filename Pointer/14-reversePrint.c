#include <stdio.h>

void reversePrint(const char *str) {
    if (*str)
        reversePrint(str + 1), putchar(*str);
}

int main() {
    reversePrint("Reverse Print");
    return 0;
}