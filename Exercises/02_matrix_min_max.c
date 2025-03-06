/* A C program that finds the smallest and largest elements in a 4x4 matrix,
    along with their indices.
*/
#include <stdio.h>
#define size 4

int main()
{
    int matrix[size][size];
    int max, min;
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

    
    printf("Enter the elements of a 4x4 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    max = min = matrix[0][0];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }


    printf("\nMaximum element: %d (Position: [%d][%d])\n", max, maxRow, maxCol);
    printf("Minimum element: %d (Position: [%d][%d])\n", min, minRow, minCol);

    return 0;
}