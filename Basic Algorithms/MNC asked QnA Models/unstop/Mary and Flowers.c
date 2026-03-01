/*
Mary and Flowers

Problem Statement
One day, Mary wanted to give a present to her friend. She decided on a beautiful bouquet of flowers and began collecting them. She needed precisely 2 types of flowers, and the total number of flowers required was 't'. To gather these, she started picking from her garden, which contained 'N' types of flowers. Each type was arranged in a queue in non-decreasing order, such as 1, 3, 6, 15, and so forth.
Now, she seeks your help in determining the indexes of the flowers she should collect.
Note: For every case, there will always be a pair of flowers whose sum equals 't'. If multiple pairs exist, select the first occurrence.

Input Format
The first line contains integers N and t where, N is the total types of flowers and t is the total number of flowers needed.
The second line contains n integers a1,a2,…,an — elements of the a array.

Output Format
Print the indexes of the two flowers that sum up to 't'. The first index should be smaller than the second index. Both indexes should be zero-based.
Constraints
2 <= N <= 10^4
1 <= a[i] <= 10^3
2 <= t <= 2*10^3

Sample Testcase 0
Testcase Input
7 5
1 2 2 4 5 7 10
Testcase Output
0 3
Explanation
The sum of flowers at index 0 and index 3 is 1 + 4 = 5, which matches the required total number of flowers needed..

Sample Testcase 1
Testcase Input
5 2
1 1 2 3 4
Testcase Output
0 1
Explanation
The sum of flowers at index 0 and index 1 is 1 + 1 = 2, which matches the required total number of flowers needed..

Companies - Accolite, Wipro, Xome
Topics - Two Pointers,Binary Search,Sorting,Array
C (GCC 13.2.0)
00:00:00
Exit
14151612131110987563421718
            result[0] = i;
            result[1] = j;
            return;
        }else if (current_sum > t){
            j--;
        }else{
            i++;
        }
    }
}



*/ 

#include <stdio.h>

void find_flower_indices(int n, int t, int arr[], int result[2]) {
    // Write your logic here.
    int i = 0;
    int j = n - 1;

    while(i < j){
        int current_sum = arr[i] + arr[j];
        if( current_sum == t){
            result[0] = i;
            result[1] = j;
            return;
        }else if (current_sum > t){
            j--;
        }else{
            i++;
        }
    }
}

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result[2];
    find_flower_indices(n, t, arr, result);
    printf("%d %d", result[0], result[1]);
    return 0;
}