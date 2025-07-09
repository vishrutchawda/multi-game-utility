#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];
char currentPlayer, player;

void initializeBoard() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    int i, j;
    printf("-------------\n");
    for (i = 0; i < 3; i++) {
        printf("| ");
        for (j = 0; j < 3; j++) {
            printf("%c | ", board[i][j]);
        }
        printf("\n-------------\n");
    }
}

int isBoardFull() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int checkWinx() {
    int i, j;

    for (i = 0; i < 3; i++) {
        if ((board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') ||
            (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') ||
            (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
            (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
            return 1;
        }
    }
    return 0;
}

int checkWino() {
    int i, j;

    for (i = 0; i < 3; i++) {
        if ((board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') ||
            (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O') ||
            (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
            (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
            return 1;
        }
    }
    return 0;
}

void computerMoveo() {
    int boxNumber, row, col;
    srand(time(NULL));
    do {
        boxNumber = rand() % 9 + 1;
        row = (boxNumber - 1) / 3;
        col = (boxNumber - 1) % 3;
    } while (board[row][col] != ' ');
    board[row][col] = 'O';
}

void computerMovex() {
    int boxNumber, row, col;
    srand(time(NULL));
    do {
        boxNumber = rand() % 9 + 1;
        row = (boxNumber - 1) / 3;
        col = (boxNumber - 1) % 3;
    } while (board[row][col] != ' ');
    board[row][col] = 'X';
}

