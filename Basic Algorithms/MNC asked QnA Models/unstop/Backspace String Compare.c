/*

Backspace String Compare

Problem Statement
Alice challenged Bob to write the same word as his on a typewriter. Both are kids and are making some mistakes in typing and are making use of the ‘#’ key on a typewriter to delete the last character printed on it.
An empty text remains empty even after backspaces. 

Input Format
The first line contains a string typed by Bob.

The second line contains a string typed by Alice.

Output Format
The first line contains ‘YES’ if Alice is able to print the exact words as Bob , otherwise ‘NO’.

Constraints
1 <= Bob.length
Alice.length <= 100000

Bob and Alice only contain lowercase letters and '#' characters.

Sample Testcase 0
Testcase Input
ab#c
ad#c
Testcase Output
YES
Explanation
Here ,
The actual typed string by Bob : ‘ac’
The actual typed string by Alice : ‘ac’
Hence , they matched.

Sample Testcase 1
Testcase Input
a#c
b
Testcase Output
NO
Explanation
Here ,
The actual typed string by Bob : ‘c’
The actual typed string by Alice : ‘b’
Hence , they do not matched.

Companies - TCS, Avizva, Wipro, Infosys
Topics -Stack, Simulation, Two Pointers, Strings

C (GCC 13.2.0)
00:00:00
Exit
1615141312111098717181920212223
#include <stdio.h>
#include <string.h>

int userLogic(char bob[], char alice[]) {
    // user logic goes here
    int b_size = strlen(bob);
    int a_size = strlen(alice);

    if(b_size != a_size) return 0;
    if(bob[0] != alice[0]) return 0;

4int userLogic(char bob[], char alice[]) {

The best score amongst all your submissions
would be considered for evaluation.

*/

#include <stdio.h>
#include <string.h>

int userLogic(char bob[], char alice[]) {
    // user logic goes here
    int b_size = strlen(bob);
    int a_size = strlen(alice);

    if(b_size != a_size) return 0;
    if(bob[0] != alice[0]) return 0;
    if(bob[b_size - 1] != alice[a_size - 1]) return 0;
    // while(bob[i] != '\0'){
    //     if(bob[i] != )
    // }
    return 1; // or 0
}

int main() {
    char bob[1001], alice[1001];
    fgets(bob, sizeof(bob), stdin);
    fgets(alice, sizeof(alice), stdin);

    // remove trailing newlines
    if (bob[strlen(bob) - 1] == '\n') bob[strlen(bob) - 1] = '\0';
    if (alice[strlen(alice) - 1] == '\n') alice[strlen(alice) - 1] = '\0';

    int result = userLogic(bob, alice);
    printf("%s\n", result ? "YES" : "NO");
    return 0;
}
