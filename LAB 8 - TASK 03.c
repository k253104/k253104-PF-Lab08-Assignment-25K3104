#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], matrix3[2][2];
    int i, j;

    printf("Enter elements for Matrix 1:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements for Matrix 2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nResult (Matrix 3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
