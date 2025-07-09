#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int toss() {
    printf("Let's play Hand Cricket.\n");
    printf("Toss Time!\n");
    printf("Enter 'heads' or 'tails': ");
    char choice[10];
    scanf("%s", choice);
    char *toss_results[2] = {"heads", "tails"};
    int toss_result = rand() % 2;
    printf("Toss Result: %s\n", toss_results[toss_result]);
    if (tolower(choice[0]) == toss_results[toss_result][0]) {
        printf("You won the toss!\n");
        return 1; // user
    } else {
        printf("Computer won the toss!\n");
        return 0; // computer
    }
}

int get_user_input() {
    int user_input;
    while (1) {
        printf("Enter your number (1-10): ");
        scanf("%d", &user_input);
        if (user_input >= 1 && user_input <= 10) {
            return user_input;
        } else {
            printf("Invalid input. Please enter a number between 1 and 10.\n");
        }
    }
}

int battinguser() {
    int total_score = 0;
    while (1) {
        int user_input = get_user_input();
        int computer_input = rand() % 10 + 1;
        printf("Computer chose: %d\n", computer_input);
        if (user_input != computer_input) {
            total_score += user_input;
            printf("Your total score: %d\n", total_score);
        } else {
            printf("Out! Your innings is over.\n");
            return total_score;
        }
    }
}

int battingcomputer() {
    int total_score = 0;
    while (1) {
        int user_input = rand() % 10 + 1;
        int computer_input = get_user_input();
        printf("Computer chose: %d\n", user_input);
        if (user_input != computer_input) {
            total_score += user_input;
            printf("Computer's total score: %d\n", total_score);
        } else {
            printf("Out! Computer's innings is over.\n");
            return total_score;
        }
    }
}

void play_game() {
    srand(time(0));
    int toss_winner = toss();
    int user_score, computer_score;
    if (toss_winner) {
        char choice[4];
        printf("Do you want to bat or bowl? ");
        scanf("%s", choice);
        if (choice[0] == 'b') {
            user_score = battinguser();
            printf("Target for computer: %d\n", user_score + 1);
            computer_score = battingcomputer();
        } else {
            computer_score = battingcomputer();
            printf("Target for you: %d\n", computer_score + 1);
            user_score = battinguser();
        }
    } else {
        printf("Computer chose to bat first.\n");
        computer_score = battingcomputer();
        printf("Target for you: %d\n", computer_score + 1);
        user_score = battinguser();
    }

    if (user_score > computer_score) {
        printf("User wins the game!\n");
    } else if (user_score < computer_score) {
        printf("Computer wins the game!\n");
    } else {
        printf("It's a draw!\n");
    }
}
