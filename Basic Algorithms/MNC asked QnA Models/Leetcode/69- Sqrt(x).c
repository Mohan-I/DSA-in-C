/*

69. Sqrt(x)
Solved - Easy

Hint
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 
Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
 
x = 2147395599



*/ 

int mySqrt(int x) {
    if( x < 0 ) return x;
    int ans;
    int low = 0;
    int high = x;

    while(low <= high){
        long mid = low + (high - low) / 2;
        long target = mid * mid;
        if(target == x){
            return ans = (int)mid;
        }else if(target < x){
            ans = (int)mid;
            low = (int)mid + 1;
        }else{
            high = (int)mid - 1;
        }
    }
    
    return ans;
}