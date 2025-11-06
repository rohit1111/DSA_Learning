//Problem Link: https://leetcode.com/problems/count-primes/

class Solution {
public:
    //Approach-1: Time complexity O(N * Sqrt(N)), gives TLE for n=5000000
    bool checkPrime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int countPrimes(int n) {
        int countPrime = 0;
        if(n == 0 || n == 1)
            return countPrime;

        for(int i=2;i<n;i++){
            if(checkPrime(i)){
                countPrime++;
                //cout<<i<<" ";
            }
        }
        return countPrime;
    }
};


/*
204. Count Primes
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
*/
