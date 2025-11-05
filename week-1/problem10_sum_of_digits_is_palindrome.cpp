//Problem Link: 
#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        int sumDigits = 0;
        int countDigits = 0;
        while(n>0){
            int digit = n % 10;
            sumDigits += digit;
            countDigits++;
            n = n / 10;
        }
        
        string ssum = to_string(sumDigits); //iots(sumDigits);
		
        int i=0;
        int j=ssum.size() - 1;
        //cout<<ssum<<" "<<ssum[i]<<" "<<ssum[j]<<" "<<i<<" "<<j<<endl;
		while(i<j){
            if(ssum[i] != ssum[j])
                return false;
			i++;
			j--;
        }
        return true;
    }
};

int main(){
	Solution s1;
	cout<<boolalpha<<s1.isDigitSumPalindrome(56)<<endl;
	cout<<boolalpha<<s1.isDigitSumPalindrome(98)<<endl;
	return 0;
}


/*
Sum of Digit is Palindrome or not
Difficulty: BasicAccuracy: 45.75%Submissions: 71K+Points: 1
Given a number n. Return true if the digit sum(or sum of digits) of n is a Palindrome number otherwise false.

A Palindrome number is a number that stays the same when reversed

Examples:

Input: n = 56
Output: true
Explanation: The digit sum of 56 is 5+6 = 11. Since, 11 is a palindrome number.Thus, answer is true.
Input: n = 98
Output: false
Explanation: The digit sum of 98 is 9+8 = 17. Since 17 is not a palindrome,thus, answer is false.
Constraints:
1 <= n <= 109


*/
