//Problem Link: https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1
#include <iostream>
using namespace std;

class Solution {
  public:
    void print_divisors(int n) {
        for(int i=1;i<=n;i++){
            if(n%i == 0)
                cout<<i<<" ";
        }
    }
};

int main(){
	Solution s1;
	s1.print_divisors(20);
	cout<<endl;
	s1.print_divisors(21191);
	cout<<endl;
	return 0;
}


/*
All divisors of a Number
Difficulty: EasyAccuracy: 46.73%Submissions: 89K+Points: 2Average Time: 10m
Given an integer n, print all the divisors of N in the ascending order.
 
Examples:

Input : n = 20
Output: 1 2 4 5 10 20
Explanation: 20 is completely divisible by 1, 2, 4, 5, 10 and 20.
Input: n = 21191
Output: 1 21191
Explanation: As 21191 is a prime number, it has only 2 factors(1 and the number itself).
Constraints:
1 ≤ n ≤ 109
*/
