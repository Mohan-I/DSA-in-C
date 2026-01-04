#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_LEN 256

// DSA Aspect: Defining a Record Structure
typedef struct {
    char username[MAX_LEN];
    char password_placeholder[MAX_LEN];
    int uid;
    int gid;
    char info[MAX_LEN];
    char home_dir[MAX_LEN];
    char shell[MAX_LEN];
} UserRecord;

int main() {
    FILE *input_fp;
    
    // DSA Aspect: Fixed-size Array (Linear Data Structure)
    // In a "Cloud" scale app, you'd use a Linked List or Dynamic Array (malloc)
    UserRecord users[MAX_USERS];
    int user_count = 0;

    input_fp = fopen("/etc/passwd", "r");

    if (input_fp == NULL) {   
        perror("Error opening file"); // Expert tip: use perror for detailed errors
        return 1;
    }

    // Parsing logic: /etc/passwd uses ':' as a delimiter
    // Format: user:pass:UID:GID:info:home:shell
    while (user_count < MAX_USERS && 
           fscanf(input_fp, " %[^:]:%[^:]:%d:%d:%[^:]:%[^:]:%[^\n]", 
                  users[user_count].username,
                  users[user_count].password_placeholder,
                  &users[user_count].uid,
                  &users[user_count].gid,
                  users[user_count].info,
                  users[user_count].home_dir,
                  users[user_count].shell) == 7) 
    {
        user_count++;
    }

    fclose(input_fp);

    // DSA Aspect: Iterating through the structure
    printf("Found %d users. Displaying first 5:\n", user_count);
    printf("--------------------------------------------------\n");
    for(int i = 0; i < (user_count > 5 ? 5 : user_count); i++) {
        printf("User: %-15s | UID: %d | Shell: %s\n", 
                users[i].username, users[i].uid, users[i].shell);
    }

    return 0;
}