/*

Kth Character

Problem Statement
One day jack finds a string of characters. He is very keen to arrange the characters in reverse order, i.e., first characters become the last characters, second characters become the second-last characters, and so on.
Now he wants your help  to find the kth character from the new string formed after reverse the original string.
Note: String contain only lowercase Latin letters.

Input Format
The first line contains two integers n, k — the length of array and the value of k respectively.
The second line contains a string containing n characters.
Output Format
Print a single line containing the kth character of the string.

Constraints
1 ≤ k ≤ n≤ 10^6

 
Sample Testcase 0
Testcase Input
5 2
abdfa
Testcase Output
f
Explanation
The reversed string is:"afdba"
The 2nd character after the reversing the string is f.

Sample Testcase 1
Testcase Input
4 4
bbxn
Testcase Output
b
Explanation
The reveresed string will be: "nxbb"
The 4th character after the reversing the string is b.

Companies
Wipro TCS IHS

Topics
Math, Strings, Two Pointers

Suggested Questions
Mary and Flowers
Measurement of Array
Ravi Caught in Strings

Request a Feature
C (gcc 7.3.0)
00:00:00
Exit
1617181920212223
    printf("%c", r[num2]);
    return 0;
}
617int main() {    for(int i = 1; i <= size; i++){

The best score amongst all your submissions
would be considered for evaluation.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num1, num2;
    char s[20];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d %d", &num1, &num2);
    scanf("%s", &s);

    int size = strlen(s);
    char r[size];

    for(int i = 1; i <= size; i++){
        r[i] = s[size - i];
    }

    printf("%c", r[num2]);
    return 0;
}