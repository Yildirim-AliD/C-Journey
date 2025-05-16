#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(100);
    if (str == NULL) {
        return 1;
    }

    printf("Enter a number: ");
    scanf("%s", str);  
    
    printf("Digits:\n");
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        printf("%c\t",*ptr);
    }

    printf("\n");

    free(str);
    return 0;
}
