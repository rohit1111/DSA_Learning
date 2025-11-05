//Problem Link: https://www.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1

#include <iostream>
using namespace std;

class Solution {
  public:
    bool checkPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i == 0)
                return false;
        }
        return true;
    }
    int prime_Sum(int n) {
        int primeNumSum = 0;
        if(n == 1)
            return 1;
            
        for(int i=2;i<=n;i++){
            if(checkPrime(i)){
                primeNumSum += i; 
            } 
        }
        return primeNumSum;
    }
};

int main(){
	Solution s1;
	cout<<s1.prime_Sum(5)<<endl;
	cout<<s1.prime_Sum(10)<<endl;
	return 0;
}

/*
Sum of all prime numbers between 1 and n
Difficulty: EasyAccuracy: 18.71%Submissions: 64K+Points: 2Average Time: 15m
Given a positive integer n, compute and return the sum of all prime numbers between 1 and n (inclusive).

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  

Examples:

Input: n = 5
Output: 10
Explanation: 2, 3 and 5 are prime numbers between 1 and 5(inclusive), and their sum is 2 + 3 + 5 = 10.
Input: n = 10
Output: 17
Explanation: 2, 3, 5 and 7 are prime numbers between 1 and 10(inclusive), and their sum is 2 + 3 + 5 + 7 = 17.
Constraints:
1 <= n <= 105
*/
