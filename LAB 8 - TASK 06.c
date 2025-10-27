#include <stdio.h>

int main() {
    int matrix1[3][3], saddlePoint[3], count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element of Row %d and Column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("|%d| ", matrix1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        int smallestInRow = matrix1[i][0];
        int colInd = 0;

        for (int j = 1; j < 3; j++) {
            if (matrix1[i][j] < smallestInRow) {
                smallestInRow = matrix1[i][j];
                colInd = j;
            }
        }

        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix1[k][colInd] > smallestInRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint)
            saddlePoint[count++] = smallestInRow;
    }

    if (count > 0) {
        printf("\nSaddle point(s) in the given matrix: ");
        for (int i = 0; i < count; i++)
            printf("%d ", saddlePoint[i]);
    } else {
        printf("\nNo saddle point found.");
    }

    return 0;
}
