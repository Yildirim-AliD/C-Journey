#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 24
#define MAX_HAND 24

void shuffle_deck(int deck[], int size);
void deal_cards(int deck[], int *deck_index, int hand[], int *hand_size);
void print_hand(int hand[], int size);
void draw_card(int deck[], int *deck_index, int hand[], int *hand_size);
int check_for_books(int hand[], int *size, int *book_count);
int transfer_cards(int from[], int *from_size, int to[], int *to_size, int number);
int has_card(int hand[], int size, int number);
int random_card(int hand[], int size);

int main() {
    int deck[DECK_SIZE];
    int deck_index = 0;

    int player_hand[MAX_HAND], player_size = 0;
    int computer_hand[MAX_HAND], computer_size = 0;

    int player_books = 0, computer_books = 0;

    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 6; j++) {
            deck[i * 6 + j - 1] = j;
        }
    }

    printf("=== BALIK AVI KART OYUNU ===\n\nKartlar karistiriliyor...\n\n");
    shuffle_deck(deck, DECK_SIZE);

    for (int i = 0; i < 6; i++) {
        draw_card(deck, &deck_index, player_hand, &player_size);
        draw_card(deck, &deck_index, computer_hand, &computer_size);
    }

    int turn = 1; 

    while (player_books < 2 && computer_books < 2 && (player_size > 0 || computer_size > 0 || deck_index < DECK_SIZE)) {
        printf("\n--- TUR ---\n");
        printf("Oyuncunun balık sayısı: %d | Bilgisayarın balık sayısı: %d\n", player_books, computer_books);
        printf("Oyuncu kartları: ");
        print_hand(player_hand, player_size);
        printf("Bilgisayar kart sayısı: %d\n", computer_size);
        printf("Masadaki kalan kart sayısı: %d\n", DECK_SIZE - deck_index);

        if (turn == 1 && player_size > 0) {
            int ask;
            printf("Hangi kart numarasini sormak istiyorsunuz? ");
            scanf("%d", &ask);
            if (ask < 1 || ask > 6) {
                printf("Gecersiz secim. Sadece 1-6 arasi sayi giriniz.\n");
                continue;
            }

            if (transfer_cards(computer_hand, &computer_size, player_hand, &player_size, ask)) {
                printf("Bilgisayarda %d numarali kart(lar) var! Verildi.\n", ask);
                if (check_for_books(player_hand, &player_size, &player_books)) {
                    printf("Tebrikler! 4 adet %d numarali kart topladiniz. 1 balik kazandiniz.\n", ask);
                }
                continue; 
            } else {
                printf("Bilgisayarda %d numarali kart YOK.\n", ask);
                printf("Balik Avi ☹ Masadan bir kart cekiyorsunuz...\n");
                draw_card(deck, &deck_index, player_hand, &player_size);
                check_for_books(player_hand, &player_size, &player_books);
                turn = 0;
            }
        }

        else if (turn == 0 && computer_size > 0) {
            int ask = random_card(computer_hand, computer_size);
            printf("Bilgisayar %d numarali karti sordu.\n", ask);

            if (transfer_cards(player_hand, &player_size, computer_hand, &computer_size, ask)) {
                printf("Oyuncuda %d var! Verildi.\n", ask);
                if (check_for_books(computer_hand, &computer_size, &computer_books)) {
                    printf("Bilgisayar 4 adet %d topladi. 1 balik kazandi.\n", ask);
                }
                continue;
            } else {
                printf("Oyuncuda %d YOK. Bilgisayar Balik Avi yapiyor...\n", ask);
                draw_card(deck, &deck_index, computer_hand, &computer_size);
                check_for_books(computer_hand, &computer_size, &computer_books);
                turn = 1;
            }
        } else {
            if (turn == 1 && player_size == 0 && deck_index < DECK_SIZE) {
                draw_card(deck, &deck_index, player_hand, &player_size);
                turn = 0;
            } else if (turn == 0 && computer_size == 0 && deck_index < DECK_SIZE) {
                draw_card(deck, &deck_index, computer_hand, &computer_size);
                turn = 1;
            } else {
                break;
            }
        }
    }

    printf("\n=== OYUN BITTI ===\n");
    if (player_books > computer_books) {
        printf("Kazanan: OYUNCU!\n");
    } else if (player_books < computer_books) {
        printf("Kazanan: BILGISAYAR!\n");
    } else {
        printf("Oyun berabere bitti!\n");
    }
    printf("Oyuncunun toplam baliği: %d\n", player_books);
    printf("Bilgisayarin toplam baliği: %d\n", computer_books);
    printf("Masadaki kalan kart sayisi: %d\n", DECK_SIZE - deck_index);

    return 0;
}


void shuffle_deck(int deck[], int size) {
    for (int i = 0; i < size; i++) {
        int r = rand() % size;
        int temp = deck[i];
        deck[i] = deck[r];
        deck[r] = temp;
    }
}

void print_hand(int hand[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", hand[i]);
    }
    printf("\n");
}

void draw_card(int deck[], int *deck_index, int hand[], int *hand_size) {
    if (*deck_index < DECK_SIZE) {
        hand[*hand_size] = deck[*deck_index];
        (*hand_size)++;
        (*deck_index)++;
        printf("Masadan cekilen kart: %d\n", hand[*hand_size - 1]);
    } else {
        printf("Masada kart kalmadi.\n");
    }
}

int check_for_books(int hand[], int *size, int *book_count) {
    int counts[7] = {0};
    int found = 0;
    for (int i = 0; i < *size; i++) {
        counts[hand[i]]++;
    }
    for (int num = 1; num <= 6; num++) {
        if (counts[num] == 4) {
            int new_size = 0;
            for (int i = 0; i < *size; i++) {
                if (hand[i] != num) {
                    hand[new_size++] = hand[i];
                }
            }
            *size = new_size;
            (*book_count)++;
            found = 1;
        }
    }
    return found;
}

int transfer_cards(int from[], int *from_size, int to[], int *to_size, int number) {
    int transferred = 0;
    for (int i = 0; i < *from_size; ) {
        if (from[i] == number) {
            to[*to_size] = number;
            (*to_size)++;
            for (int j = i; j < *from_size - 1; j++) {
                from[j] = from[j + 1];
            }
            (*from_size)--;
            transferred = 1;
        } else {
            i++;
        }
    }
    return transferred;
}

int has_card(int hand[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (hand[i] == number) return 1;
    }
    return 0;
}

int random_card(int hand[], int size) {
    return hand[rand() % size];
}
