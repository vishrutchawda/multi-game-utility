#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    printf("Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[10][10], int transposed[10][10], int rows, int cols) {
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
}

