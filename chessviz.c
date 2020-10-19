#include <stdio.h>

void BoardInit(char* board)
{
    int i;
    board[0] = 'R';
    board[1] = 'N';
    board[2] = 'B';
    board[3] = 'K';
    board[4] = 'Q';
    board[5] = 'B';
    board[6] = 'N';
    board[7] = 'R';
    for (i=8; i<=15; i++){
        board[i] = 'P';
    }
    for (i=16; i<=47; i++){
        board[i] = ' ';
    }
    for (i=48; i<=55; i++){
        board[i] = 'p';
    }
    board[56] = 'r';
    board[57] = 'n';
    board[58] = 'b';
    board[59] = 'k';
    board[60] = 'q';
    board[61] = 'b';
    board[62] = 'n';
    board[63] = 'r';
}

void BoardPrint(char* board)
{
    int i, j;
    for (i=7; i>=0; i--){
        printf("%d|", i+1);
        for (j=7; j>=0; j--){
            printf("%c ", board[(i*8)+j]);
        }
        printf("\n");
    }
    for (i=0; i<=8; i++){
        printf("--");
    }
    printf("\n");
    printf("  ");
    for (i=0; i<8; i++){
        printf("%c ", 65+i);
    }
    printf("\n");
}

int main()
{
    char board[64];
    BoardInit(board);
    BoardPrint(board);
    return 0;
}
