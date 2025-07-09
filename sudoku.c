#include <stdio.h>
#include <stdbool.h>

#define N 9

bool isSafe(char grid[N][N], int row, int col, char num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }
    return true;
}

void printGrid(char grid[N][N]) {
    for (int row = 0; row < N; row++) {
        if (row % 3 == 0 && row != 0) {
            printf("-----------------------\n");
        }
        for (int col = 0; col < N; col++) {
            if (col % 3 == 0 && col != 0) {
                printf("| ");
            }
            printf("%c ", grid[row][col]);
        }
        printf("\n");
    }
}
