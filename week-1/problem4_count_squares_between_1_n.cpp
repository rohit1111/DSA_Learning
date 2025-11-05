//Problem Link: https://www.geeksforgeeks.org/problems/count-squares3649/1

class Solution {
  public:
    int countSquares(int n) {
        int countPerfectSquares = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(i*i < n)
                countPerfectSquares++;
        }
        return countPerfectSquares;
    }
};


/*
Count Squares
Difficulty: BasicAccuracy: 41.44%Submissions: 154K+Points: 1
Given a positive integer n, find the number of perfect squares that are less than n in the sample space of perfect squares. The sample space consists of all perfect squares starting from 1 (i.e., 1, 4, 9, 16, 25, …)

Examples :

Input: n = 9
Output: 2
Explanation: 1 and 4 are the only Perfect Squares less than 9. So, the Output is 2.
Input: n = 3
Output: 1
Explanation: 1 is the only Perfect Square less than 3. So, the Output is 1.
Constraints:
1 <= n <= 108
*/
