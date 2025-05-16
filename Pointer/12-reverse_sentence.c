#include <stdio.h>
#include <string.h>
void reverse(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    if (*end == '\n') {
        *end = '\0';
        end--;
    }

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Bir cümle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    reverse(sentence);

    printf("Ters çevrilmiş cümle: %s\n", sentence);
    return 0;
}
