/*
3. Longest Substring Without Repeating Characters

Solved - Medium
Hint
Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/ 
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int lengthOfLongestSubstring(char* s) {
    
    int word[256];
    memset(word, -1, sizeof(word));

    int left = 0, right = 0, max_num = 0, current = 0;

    for(right = 0; s[right] != '\0'; right++){
        unsigned char ch = (unsigned char) s[right];

        if(word[ch] >= left){
            left = word[ch] + 1;
        }

        word[ch] = right;

        current = right - left + 1;
        max_num = MAX(max_num, current);
    }
    return max_num;
}