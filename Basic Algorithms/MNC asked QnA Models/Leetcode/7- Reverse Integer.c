/*
7. Reverse Integer
Solved - Medium
Topics - Math

Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
*/ 

int reverse(int x){
    int rev = 0, pop = 0;
    while(x != 0){
        pop = x % 10;
        x /= 10;

        if(rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if(rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;

        rev = rev * 10 + pop;
    }

    return rev;
}

/*

    EXPLAINATION:

    In C, the signed 32-bit limits are defined in <limits.h> as 
    INT_MAX (2^{31} - 1)  | // Check for Overflow before multiplying by 10 // INT_MAX is 2147483647
    and 
    INT_MIN (-2^{31}).    | // Check for Underflow before multiplying by 10 // INT_MIN is -2147483648

    Why the 7 and -8 ?
    'Sir, because after that, even God can't save the variable'
    INT_MAX ends in 7 ( 2,147,483,647 ). If your current reversed number is exactly INT_MAX / 10 and the next digit you’re adding is greater than 7, it will overflow.
    INT_MIN ends in 8 ( -2,147,483,648 ). If your current reversed number is exactly INT_MIN / 10 and the next digit is less than -8, it will underflow.

    Commentary: "32-bit range aur Mumbai local ki seat—dono mein limit se zyada log ghusne ki koshish karenge toh 'Overflow' toh hona hi hai!" 
    Bhai, ye logic bilkul waisa hai jaise Virar Fast mein last seat ke liye check karna. Agar 7 log baithe hain aur 8th wala mota hai (pop > 7), toh seat toot jayegi!

    Real World Usage : An Ingame Character Like Resident Evil 
    Carlos has enough space for 8 items. If you try to give him a 9th, he doesn't drop it—he just crashes the game. That's your INT_MAX logic right there.
*/ 