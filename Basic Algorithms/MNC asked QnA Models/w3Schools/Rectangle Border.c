/*
Practice C Basics: Rectangle Border
Print a rectangle border made of stars.

Instructions
Read a width and a height from input.

Print a rectangle border using * characters.

The first and last rows are full rows of stars. The rows in between have a star at the start and end, with spaces in the middle.

Input used in test:
5
4
Expected Output
*****
*   *
*   *
*****
Reason: Width is 5, height is 4. First and last rows are all stars. Middle rows have stars only at the edges.
*/ 

#include <stdio.h>

int main() {
    int width, height;
    scanf("%d", &width);
    scanf("%d", &height);

    // Print the rectangle border
  	for(int i = 0; i< height; i++){
    	for(int j = 0; j < width; j++){
    		if(i == 0 || j == 0 || i == height - 1 || j == width - 1){
      		    printf("*");
    		}else{
                printf(" ");
            }
    	}
      printf("\n");
  	}
    return 0;
}