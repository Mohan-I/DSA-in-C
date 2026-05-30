#include <stdio.h>

int main(){
    int sudoku[9][9];
    int shift = 4;

    for(int r = 0; r < 9; r++){
        for(int c = 0; c < 9; c++){
            sudoku[r][c] = ((r * shift + r / shift + c) % 9) + 1;
            printf("[%d]", sudoku[r][c]);
        }
        printf("\n");
    }

    return 0;
}