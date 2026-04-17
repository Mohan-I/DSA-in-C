/*
Practice C Strings: Make a Username
Create a username and initials from a first and last name.

Instructions
Read a first name and a last name from input.

Create a username by joining the two names together in lowercase (no space between them).

Print these two lines:

Username: [username]
Initials: [first letter of first name][first letter of last name] (in uppercase)
Input used in test:
Kai
Tove
Expected Output
Username: kaitove
Initials: KT
Reason: Username = "Kai" + "Tove" in lowercase = "kaitove". Initials = "K" + "T".
*/ 

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
  	int size2 = strlen(firstName);

    // Create initials (uppercase first letters)
		initials[0] = toupper(firstName[0]);		
  	initials[1] = toupper(lastName[0]);
		initials[2] = '\0';

    // Create username (lowercase, no space)
		for(int i = 0; i < size1; i++) firstName[i] = tolower(firstName[i]);		
  	for(int i = 0; i < size2; i++) lastName[i] = tolower(lastName[i]);
		strcpy(username, firstName);		
  	strcat(username, lastName);

    // Print results
  	printf("Username: %s\n", username);  	
  	printf("Initials: %s", initials);

    return 0;
}
