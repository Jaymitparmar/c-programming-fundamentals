#include <stdio.h>
#include <conio.h>

char board[3][3];

// Initialize board
void initBoard() {
    char ch = '1';
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

// Display board
void displayBoard() {
    int i, j;
    clrscr();   // clear screen

    printf("\n TIC TAC TOE (OX GAME)\n\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Check win
int checkWin() {
    int i;

    for(i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

// Check draw
int checkDraw() {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
        }
    }
    return 1;
}

void main() {
    int choice, row, col;
    char player = 'X';

    clrscr();
    initBoard();

    while(1) {
        displayBoard();

        printf("Player %c, enter choice (1-9): ", player);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if(choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            printf("\nInvalid move!");
            getch();
            continue;
        }

        board[row][col] = player;

        if(checkWin()) {
            displayBoard();
            printf("Player %c wins!", player);
            getch();
            break;
        }

        if(checkDraw()) {
            displayBoard();
            printf("Game is Draw!");
            getch();
            break;
        }

        // Switch player
        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    getch();
}