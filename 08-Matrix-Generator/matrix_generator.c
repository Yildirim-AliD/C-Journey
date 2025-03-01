#include <stdio.h>


void allOnesMatrix(int size);
void rowNumberMatrix(int size);
void increasingNumbersMatrix(int size);
void diagonalZeroMatrix1(int size);
void diagonalZeroMatrix2(int size);
void triangleZeroMatrix1(int size);
void triangleZeroMatrix2(int size);

int main()
{
    int choice, size;

    printf("Please Choose a value between 1 and 7 to create the matrix:\n"
           "1 - Matrix with all elements as 1\n"
           "2 - Matrix filled according to row numbers\n"
           "3 - Matrix filled with increasing numbers starting from 1\n"
           "4 - Matrix with zeros on the diagonal(from top lef to bottom right)\n"
           "5 - Matrix with zeros on the diagonal(from top right to bottom left)\n"
           "6 - Upper trianguler matrix with zeros\n"
           "7 - Lower tringuler matrix with zeros\n"
           "Your choice: ");
    scanf("%d", &choice);

    printf("Please specify the matrix size: ");
    scanf("%d", &size);

    switch (choice)
    {
        case 1:
            allOnesMatrix(size);
            break;
        case 2:
            rowNumberMatrix(size);
            break;
        case 3:
            increasingNumbersMatrix(size);
            break;
        case 4:
            diagonalZeroMatrix1(size);
            break;
        case 5:
            diagonalZeroMatrix2(size);
            break;
        case 6:
            triangleZeroMatrix1(size);
            break;
        case 7:
            triangleZeroMatrix2(size);
            break;
        default:
            printf("You did not enter aa valid value!\n");
    }

    return 0;
}


void allOnesMatrix(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("1 ");
        }
        printf("\n");
    }
}


void rowNumberMatrix(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", i + 1);
        }
        printf("\n");
    }
}


void increasingNumbersMatrix(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}

void diagonalZeroMatrix1(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == j)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}

void diagonalZeroMatrix2(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (j == size - i - 1)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}


void triangleZeroMatrix1(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (j > i)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}


void triangleZeroMatrix2(int size)
{
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (j < i)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}
