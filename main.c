#include <stdio.h>
#include <stdbool.h>
#include "tic tac toe.c"
#include "convertor.c"
#include "matrix calculator.c"
#include "sudoku.c"
#include "hand cricket.c"
#define N 9

void matrix(){
int rows1, cols1, rows2, cols2;
    int matrix1[10][10], matrix2[10][10], result[10][10], transposed[10][10];
    int choice;

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("Enter 1 for addition , 2 for subtraction , 3 for multiplication , 4 for Transpose:- ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Enter number of rows for Matrix 1: ");
        scanf("%d", &rows1);
        printf("Enter number of columns for Matrix 1: ");
        scanf("%d", &cols1);

        printf("Input for Matrix 1:\n");
        inputMatrix(matrix1, rows1, cols1);

        printf("Enter number of rows for Matrix 2: ");
        scanf("%d", &rows2);
        printf("Enter number of columns for Matrix 2: ");
        scanf("%d", &cols2);

        printf("Input for Matrix 2:\n");
        inputMatrix(matrix2, rows2, cols2);
    } else if (choice == 4) {
        printf("Enter number of rows: ");
        scanf("%d", &rows1);
        printf("Enter number of columns: ");
        scanf("%d", &cols1);

        printf("Input for Matrix:\n");
        inputMatrix(matrix1, rows1, cols1);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    switch(choice) {
        case 1:
            if (rows1 == rows2 && cols1 == cols2) {
                printf("Matrix Addition Result:\n");
                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < cols1; j++) {
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }
                displayMatrix(result, rows1, cols1);
            } else {
                printf("Invalid operation. Matrices must have the same dimensions for addition.\n");
            }
            break;
        case 2:
            if (rows1 == rows2 && cols1 == cols2) {
                printf("Matrix Subtraction Result:\n");
                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < cols1; j++) {
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                    }
                }
                displayMatrix(result, rows1, cols1);
            } else {
                printf("Invalid operation. Matrices must have the same dimensions for subtraction.\n");
            }
            break;
        case 3:
            if (cols1 == rows2) {
                printf("Matrix Multiplication Result:\n");
                for(int i = 0; i < rows1; i++) {
                    for(int j = 0; j < cols2; j++) {
                        result[i][j] = 0;
                        for(int k = 0; k < cols1; k++) {
                            result[i][j] += matrix1[i][k] * matrix2[k][j];
                        }
                    }
                }
                displayMatrix(result, rows1, cols2);
            } else {
                printf("Invalid operation. Number of columns in Matrix 1 must be equal to number of rows in Matrix 2 for multiplication.\n");
            }
            break;
        case 4:
            printf("Transpose of Matrix 1:\n");
            transposeMatrix(matrix1, transposed, rows1, cols1);
            displayMatrix(transposed, cols1, rows1);
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void sudoku(){
printf("Let's play sudoku.\n");
printf("Rules:-\n");
printf("1)There is a box of 9 by 9.\n");
printf("2)So you have fill numbers in it from 1 to 9.\n");
printf("3)But you have to fill number such that the numbers from 1 to 9 should not repeat in a row.\n");
printf("4)Also the numbers from 1 to 9 should not repeat in a column.\n");
printf("5)Also the numbers from 1 to 9 should not repeat in a 3 by 3 box.\n");
printf("Good Luck!\n");
    char grid[N][N] = {
        {'5', '3', ' ', ' ', '7', ' ', '9', ' ', '2'},
        {'6', ' ', ' ', '1', '9', '5', ' ', ' ', ' '},
        {' ', '9', '8', ' ', ' ', ' ', ' ', '6', '7'},
        {'8', ' ', ' ', ' ', '6', ' ', '4', ' ', '3'},
        {'4', ' ', ' ', '8', ' ', '3', ' ', ' ', '1'},
        {'7', ' ', ' ', ' ', '2', ' ', ' ', ' ', '6'},
        {' ', '6', ' ', ' ', ' ', ' ', '2', '8', ' '},
        {' ', ' ', ' ', '4', '1', '9', ' ', ' ', '5'},
        {'3', '4', '5', ' ', '8', ' ', ' ', '7', '9'}
    };

    printf("Sudoku Puzzle:\n");
    printGrid(grid);

    int row, col;
    char num;
    while (true) {
        printf("Enter row (1-9), column (1-9), and number (1-9 or space to exit): ");
        scanf("%d %d %c", &row, &col, &num);

        if (num == ' ') {
            printf("Exiting the game. Goodbye!\n");
            break;
        }

        row--;
        col--;

        if (row >= 0 && row < N && col >= 0 && col < N && (num >= '1' && num <= '9' || num == ' ')) {
            if (grid[row][col] == ' ' && isSafe(grid, row, col, num)) {
                grid[row][col] = num;
                printf("Move accepted!\n");
                printGrid(grid);


                bool puzzleSolved = true;
                for (int r = 0; r < N; r++) {
                    for (int c = 0; c < N; c++) {
                        if (grid[r][c] == ' ') {
                            puzzleSolved = false;
                            break;
                        }
                    }
                    if (!puzzleSolved) {
                        break;
                    }
                }

                if (puzzleSolved) {
                    printf("Congratulations! You have solved the Sudoku puzzle!\n");
                    break;
                }
            } else {
                printf("Invalid move. Try again.\n");
            }
        } else {
            printf("Invalid input. Please enter row, column, and number between 1 and 9 or space.\n");
        }
    }
}

void cricket(){
play_game();
}

void convertor(){
    int choice;

    do {
        
        printf("\033[5m\n*** Unit Conversion Menu ***\n\033[0m");
        printf("\033[1;36m1. Weight\n");
        printf("2. Length\n");
        printf("3. Volume\n");
        printf("4. Speed\n");
        printf("5. Data\n");
        printf("6. Time\n");
        printf("7. Temperature\n");
        printf("0. Exit\n\033[0m");
        printf("Enter your choice:- ");
        scanf("%d", &choice);
        

        switch (choice) {
            case 1:
                weightConversion();
                break;
            case 2:
                lengthConversion();
                break;
            case 3:
                volumeConversion();
                break;
            case 4:
                speedConversion();
                break;
            case 5:
                dataConversion();
                break;
            case 6:
                timeConversion();
                break;
            case 7:
                temperatureConversion();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}
void tictactoe(){
int boxNumber;

    initializeBoard();
    printf("Let's play tic-tac-toe\n");

    while (1) {
        printf("What do you want 'x' or 'o': ");
        fflush(stdin);
        scanf(" %c", &player);
        if (player == 'x' || player == 'X') {
            currentPlayer = 'X';
            break;
        } else if (player == 'o' || player == 'O') {
            currentPlayer = 'O';
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    while (1) {
        if (currentPlayer == 'X') {
            displayBoard();

            printf("Your turn. Enter the box number (1 to 9): ");
            scanf("%d", &boxNumber);

            if (boxNumber >= 1 && boxNumber <= 9) {
                int row = (boxNumber - 1) / 3;
                int col = (boxNumber - 1) % 3;

                if (board[row][col] == ' ') {
                    board[row][col] = currentPlayer;
                } else {
                    printf("Invalid move. Box already filled. Please try again.\n");
                    continue;
                }
            } else {
                printf("Invalid move. Please enter a number between 1 and 9.\n");
                continue;
            }

            if (isBoardFull()) {
                displayBoard();
                printf("It's a draw!\n");
                break;
            }
            printf("Computer's turn...\n");
            computerMoveo();


            if (checkWinx()) {
                displayBoard();
                printf("Congratulations! You win!\n");
                break;
            } else if (checkWino()) {
                displayBoard();
                printf("Computer wins! Better luck next time.\n");
                break;
            }
        }
         if (currentPlayer == 'O') {
            displayBoard();

            printf("Your turn. Enter the box number (1 to 9): ");
            scanf("%d", &boxNumber);

            if (boxNumber >= 1 && boxNumber <= 9) {
                int row = (boxNumber - 1) / 3;
                int col = (boxNumber - 1) % 3;

                if (board[row][col] == ' ') {
                    board[row][col] = currentPlayer;
                } else {
                    printf("Invalid move. Box already filled. Please try again.\n");
                    continue;
                }
            } else {
                printf("Invalid move. Please enter a number between 1 and 9.\n");
                continue;
            }

            if (isBoardFull()) {
                displayBoard();
                printf("It's a draw!\n");
                break;
            }
            printf("Computer's turn...\n");
            computerMovex();


            if (checkWino()) {
                displayBoard();
                printf("Congratulations! You win!\n");
                break;
            } else if (checkWinx()) {
                displayBoard();
                printf("Computer wins! Better luck next time.\n");
                break;
            }
        }

            }
            }


int main() {
    int choice;

    printf("\033[2J\033[H"); // Clear screen

    printf("\033[1;36mWelcome to the menu-driven program.\n\033[0m");

    do {
        printf("\n\033[1mMenu:-\n\033[0m");
        printf("\033[1;34m1. Tic Tac Toe game\n\033[0m");
        printf("\033[1;34m2. Sudoku\n\033[0m");
        printf("\033[1;34m3. Matrix calculator\n\033[0m");
        printf("\033[1;34m4. Converter\n\033[0m");
        printf("\033[1;34m5. Hand cricket\n\033[0m");
        printf("\033[1;34m0. Exit\n\033[0m");

        printf("Enter your choice :- ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tictactoe();
                break;
            case 2:
                sudoku();
                break;
            case 3:
                matrix();
                break;
            case 4:
                convertor();
                break;
            case 5:
                cricket();
                break;
            case 0:
                break;
            default:
                printf("\033[1;31mInvalid choice. Please try again.\n\033[0m");
        }
    } while (choice != 0);

    return 0;
}
