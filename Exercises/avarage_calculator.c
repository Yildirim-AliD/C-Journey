#include <stdio.h>

int main()
{
    char c;
    int num, sum = 0, count = 0;
    float ort;

    do
    {
        printf("Please enter a value: ");
        scanf("%d", &num);
        
        sum += num;
        count++;
        
        ort = (float)sum / count;
        
        printf("Wil you continue? (Y/N): ");
        scanf(" %c", &c);
        
    } while (c == 'Y' || c == 'y');
    
    printf("\nThe average of the entered values: %.2f\n", ort);

    return 0;
}
