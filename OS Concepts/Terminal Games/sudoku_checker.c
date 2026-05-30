#include <stdio.h>
#include <stdbool.h>

// Function to check if it's safe to place a number in sudoku[row][col]
bool isSafe(int sudoku[9][9], int row, int col, int num) {
    // 1. Check the row
    for (int x = 0; x < 9; x++) {
        if (sudoku[row][x] == num) {
            return false;
        }
    }

    // 2. Check the column
    for (int x = 0; x < 9; x++) {
        if (sudoku[x][col] == num) {
            return false;
        }
    }

    // 3. Check the 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sudoku[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true; // Safe to place
}

// The core Backtracking Algorithm
bool solveSudoku(int sudoku[9][9]) {
    int row = -1;
    int col = -1;
    bool isEmpty = false;

    // Find the first empty cell (marked as 0)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) break;
    }

    // If there is no empty cell, the puzzle is solved!
    if (!isEmpty) {
        return true;
    }

    // Try digits 1 to 9 for the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isSafe(sudoku, row, col, num)) {
            // Tentatively assign the number
            sudoku[row][col] = num;

            // Recursively try to solve the rest of the board
            if (solveSudoku(sudoku)) {
                return true;
            }

            // BACKTRACK: If the assignment leads to a dead end, undo it
            sudoku[row][col] = 0;
        }
    }

    return false; // Triggers backtracking to the previous cell
}

// Helper function to print the grid
void printGrid(int sudoku[9][9]) {
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            printf("[%d]", sudoku[r][c]);
        }
        printf("\n");
    }
}

int main() {
    // An unsolved puzzle (0 represents empty cells)
    int sudoku[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Original Unsolved Puzzle:\n");
    printGrid(sudoku);
    printf("\n-------------------------\n\n");

    if (solveSudoku(sudoku)) {
        printf("Solved Puzzle via Backtracking:\n");
        printGrid(sudoku);
    } else {
        printf("No solution exists for this puzzle.\n");
    }

    return 0;
}