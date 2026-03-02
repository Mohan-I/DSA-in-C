/*

Set Matrix Zeroes - [ Subscribe to TUF+ ]

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.

Example 1
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation:
Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.

Example 2
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:
There are two zeroes: (0,0) and (0,3).

Row 0 → all elements become 0
Column 0 and column 3 → all elements become 0
Now your turn!

Input: matrix = [[1,2,3,4],[5,6,0,8],[9,10,11,12]]

Output: Validate for true understanding of problem

[[1,2,0,4],[0,0,0,0],[9,10,0,12]]

[[1,2,3,4],[0,0,0,0],[9,10,0,12]]

[[1,2,0,0],[0,0,0,0],[9,10,0,12]]

[[1,2,3,0],[0,0,0,0],[9,10,0,12]]

Constraints

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1

*/
    /* // For Test Case 1
    int r = 3; // rows
    int c = 3; // columns
    int nums[3][3] = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    */

    /* // For Test Case 3
    int r = 3; // rows
    int c = 4; // columns
    int nums[3][4] = {
        {1,2,3,4},
        {5,6,0,8},
        {9,10,11,12}
    };
    */ 
    
#include <stdio.h>
#include <stdbool.h>

int main(){
    int r = 3; // rows
    int c = 4; // columns
    int nums[3][4] = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };

    // -------------Logic--[Below]-----------------------------|

    bool isRowZero[3] = {false};
    bool isColZero[4] = {false};

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(nums[i][j] == 0){
                isRowZero[i] = true;
                isColZero[j] = true;
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(isRowZero[i] || isColZero[j]){
                nums[i][j] = 0;
            }
        }
    }

    // -------------Logic--[Above]-----------------------------|

    for(int i = 0; i < r; i++){
        printf("|");
        for(int j = 0; j < c; j++){
            printf(" %d ", nums[i][j]);
        }
        printf("|\n");
    }

    return 0;
}