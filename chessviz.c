#include <stdio.h>

void BoardInit(char* board)
{
    int i;
    board[0] = 'r';
    board[1] = 'n';
    board[2] = 'b';
    board[3] = 'q';
    board[4] = 'k';
    board[5] = 'b';
    board[6] = 'n';
    board[7] = 'r';
    for (i=8; i<=15; i++){
        board[i] = 'p';
    }
    for (i=16; i<=47; i++){
        board[i] = ' ';
    }
    for (i=48; i<=55; i++){
        board[i] = 'P';
    }
    board[56] = 'R';
    board[57] = 'N';
    board[58] = 'B';
    board[59] = 'Q';
    board[60] = 'K';
    board[61] = 'B';
    board[62] = 'N';
    board[63] = 'R';
}

void BoardPrint(char* board)
{
    int i, j;
    for (i=0; i<8; i++){
        printf("%d|", 8-i);
        for (j=0; j<8; j++){
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
    BoardInit(&board);
    BoardPrint(&board);
    return 0;
}
