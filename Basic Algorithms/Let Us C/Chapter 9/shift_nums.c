/*

AIM : To shift values without using loop or interchanging values like x = z, y = x, z = y. or standard "temp variable" swapping logic (like temp = x; x = z; ...).

for eg :
Input :  x = 2, y = 7 , z = 8
Output : x = 8, y = 2, z = 7

*/ 

#include <stdio.h>

void shift_val(int x, int y, int z) {
    // 1. Store the total sum in x
    x = x + y + z;

    // 2. y takes original x: total - (old y + old z)
    y = x - (y + z);

    // 3. z takes original y: total - (new y + old z)
    z = x - (y + z);

    // 4. x takes original z: total - (new y + new z)
    x = x - (y + z);

    printf("\nThe shifted values are \n\n[ x = %d, y = %d, z = %d ]", x , y , z);
}

int main() {
    int x, y, z;
    printf("Enter the Values x, y, z: ");
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        return 1;
    }

    printf("\nThe original values are \n\n[ x = %d, y = %d, z = %d ]", x , y , z);
    printf("\nThe Values of x, y and z after shifting are: ");
    shift_val(x, y, z);

    return 0;
}

/*
    EXPLANATION:

    The Logic (Step-by-Step)
    Given initial: 'x=2, y=7, z=8' (Sum = 17)
    'x = x + y + z': 'x' becomes 17.
    'y = x - (y + z)': '17 - (7 + 8) = 2'. Now 'y = 2' (Original 'x').
    'z = x - (y + z)': '17 - (2 + 8) = 7'. Now 'z = 7' (Original 'y').
    'x = x - (y + z)': '17 - (2 + 7) = 8'. Now 'x = 8' (Original 'z').
*/