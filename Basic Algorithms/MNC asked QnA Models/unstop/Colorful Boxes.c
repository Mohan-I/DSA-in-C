#include <stdio.h>
#include <string.h>

void reverse(char*s, int left, int right){
    while(left < right){
        char temp = s[right];
        s[right] = s[left];
        s[left] = temp;
        left++;
        right--;
    }
}

void reverse_words(char* s) {
    // Write your logic here.
    int size = strlen(s);

    int start = 0;
    for(int i = 0; i <= size; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            int N = i - 1;
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
}

// int main() {
//     char s[100005];
//     fgets(s, 100005, stdin);
//     s[strcspn(s, "\n")] = 0;
//     reverse_words(s);
//     printf("%s\n", s);
//     return 0;
// }

int main() {
    char s[100005];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // Strip trailing newline (\n) if present
        s[strcspn(s, "\n")] = '\0';
        // Strip trailing carriage return (\r) if present (handles \r\n)
        s[strcspn(s, "\r")] = '\0';
        
        reverse_words(s);
        printf("%s\n", s);
    }
    return 0;
}

/*

easyeasy
Score - 100/100
Problem Statement
Alice's room is filled with a set of colorful boxes, and inside each box is a word. To win her unique game, you must carefully open each box, and turn the word inside upside down, but remember, the order of the boxes must remain the same.

Can you assist Alice in achieving victory by mastering this task of reversing the words in her collection of boxes?

Input Format
The first line of input data contains a string s which contains the words in the boxes separated by a space.

Note: The ith word in string s denotes the word in the ith box. 

Output Format
The output contains a string that has the words in each box in reversed order. 

Constraints
1<=s.length<=5*10^4

s does not contain any leading or trailing spaces.

Sample Testcase 0
Testcase Input
Good Job
Testcase Output
dooG boJ
Explanation
In this sample test case “Good Job" word Good is reversed to “dooG” and “Job” is reversed to “boJ” but the relative order remained same.

Sample Testcase 1
Testcase Input
Let's learn
Testcase Output
s'teL nrael
Explanation
The words "Let's" and "learn" are reversed to "s'teL" and "nrael" and added in the same order to the new string. 

Companies
Flipkart

Topics
Two Pointers
Strings
String
Stack
Array

*/ 