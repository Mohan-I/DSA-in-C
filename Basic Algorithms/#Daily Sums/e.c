#include <stdio.h>

int main(){
    int nums[] = {2,0,0,1,2,0,3,0,0,0,4,3,0,2,1,5,0,0,2,0,3,4,0,5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int lastNum = 0, i;

    while(nums[i] != 0){
        nums[lastNum++] = nums[i];
        nums[i] = 0;

        if(nums[i] == nums[size - 1]) break;
    }

    for(int i = 0; i < size; i++){
        printf("[%d]", nums[i]);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char firstName[50], lastName[50];
    scanf("%s", firstName);
    scanf("%s", lastName);
    char username[100];
    char initials[3];
  
  	int size1 = strlen(firstName);  	
  	int size2 = strlen(lastName);

  
  	// Create initials (uppercase first letters)
		initails[0] = toupper(firstName[0]);		
    initails[1] = toupper(lastName[0]);
  	initials[2] = '\0';

    // Create username (lowercase, no space)
		for(int i = 0; i < size1; i++) firstName[i] = tolower(firstName[i]);		
    for(int i = 0; i < size2; i++) lastName[i] = tolower(lastName[i]);
		strcpy(username, firstName);		
  	strcat(username, lastName);

    // Print results
    printf("Username: %s\nInitials: %s", username, initials);
    return 0;
}
