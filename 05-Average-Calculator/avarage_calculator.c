#include <stdio.h>

int main()
{
    char c;
    int num, sum = 0, sayaç = 0;
    float ort;

    do
    {
        printf("Değer giriniz: ");
        scanf("%d", &num);
        
        sum += num;
        sayaç++;
        
        ort = (float)sum / sayaç;
        
        printf("Devam edecek misiniz? (E/H): ");
        scanf(" %c", &c);
        
    } while (c == 'E' || c == 'e');
    
    printf("\nGirilen sayıların ortalaması: %.2f\n", ort);

    return 0;
}
