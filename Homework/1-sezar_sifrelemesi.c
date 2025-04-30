/*Ödev sadece <stdio.h> ve <string.h> kütüphanelerini kullanarak gerçekleştirilmelidir.
Program, kullanıcıdan bir metin, bir anahtar değeri ve işlem türü (şifreleme veya deşifreleme) almalıdır.
Şifreleme ve deşifreleme işlemleri sifrele, sifrecoz isimli iki ayrı fonksiyonlarda gerçekleştirilmelidir.
Sadece harfler (A-Z, a-z) şifrelenmelidir; rakamlar, özel karakterler ve boşluklar değiştirilmeden kalmalıdır.
Hem büyük hem de küçük harfleri işleyebilmeli ve harflerin büyük/küçük durumunu korumalıdır.
Anahtar değeri 1-25 arasında olmalıdır*/

#include <stdio.h>
#include <string.h>

void sifrele(char *metin ,int n);
void sifrecoz(char *metin ,int n);

int main() {
    int n, choice;
    char metin[100], original[100], temp[20];

    printf("Metni giriniz: ");
    fgets(metin, sizeof(metin), stdin);

    printf("Anahtar: ");
    scanf("%d", &n);

    while (n < 1 || n > 25) {
        printf("n değeri '1'den küçük veya '25'ten büyük olamaz!\n"
               "Yeni n değerini giriniz: ");
        scanf("%d", &n);
    }

    strcpy(original, metin);
    do {
        printf("Yapmak istediğiniz işlemi giriniz:\n"
               "1-Şifreleme\n"
               "2-Deşifreleme\n"
               "Seçim: ");
        scanf("%d", &choice);

        if (choice == 1) {
            sifrele(metin, n);
            strcpy(temp, "Şifre");
        } else if (choice == 2) {
            sifrecoz(metin, n);
            strcpy(temp, "Açık Metin");
        } else {
            printf("Lütfen tanımlı bir işlem seçin!\n");
        }

    } while (choice != 1 && choice != 2);

    printf("\nGiriş metni: %s"
           "Anahtar: %d\n"
           "Çıktı (%s): %s\n", original, n, temp, metin);

    return 0;
}

void sifrele(char *metin, int n) {
    for (int i = 0; i < strlen(metin); i++) {
        char c = metin[i];
        if (c >= 'A' && c <= 'Z') {
            metin[i] = 'A' + (c - 'A' + n) % 26;
        } else if (c >= 'a' && c <= 'z') {
            metin[i] = 'a' + (c - 'a' + n) % 26;
        }else;
    }
}

void sifrecoz(char *metin, int n) {
    for (int i = 0; i < strlen(metin); i++) {
        char c = metin[i];
        if (c >= 'A' && c <= 'Z') {
            metin[i] = 'A' + (c - 'A' - n + 26) % 26;
        } else if (c >= 'a' && c <= 'z') {
            metin[i] = 'a' + (c - 'a' - n + 26) % 26;
        }else;
    }
}