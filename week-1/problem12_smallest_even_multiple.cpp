// Problem Link: https://leetcode.com/problems/smallest-even-multiple/description/
// Same as calculating LCM: Lowest Common Multiplier

class Solution {
public:
    int findGCD(int a,int b){
        int small = min(a,b);
        for(int i=small;i>0;i--){
            if(a%i == 0 && b%i ==0)
                return i;
        }
        return 1;
    }
    int smallestEvenMultiple(int n) {
        int gcd_num = findGCD(2,n);
        int result = (2 * n)/gcd_num;
        return result;
    }
};

/*
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 

Example 1:

Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
Example 2:

Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
 

Constraints:

1 <= n <= 150
*/
