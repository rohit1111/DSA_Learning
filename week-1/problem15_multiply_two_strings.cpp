//Problem Link: https://www.geeksforgeeks.org/problems/multiply-two-strings/1
#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    int getNumber(string s1){
        int n = s1.size()-1;
        int index = 1;
        int number = 0;
        for(int i=n;i>=0;i--){
            if(s1[i] >= 48 && s1[i] <= 57){
                int digit = s1[i] - 48;
                number = number + digit * index;
                index = index * 10;
            }else{
                number = number * -1;
            }
        }
        return number;
    }
    string multiplyStrings(string &s1, string &s2) {
        int a = getNumber(s1);
        int b = getNumber(s2);
        return to_string(a*b);
    }
};

int main(){
	Solution s1;
	string str1 = "0033";
	string str2 = "2";
	cout<<s1.multiplyStrings(str1,str2)<<endl;
	str1 = "11";
	str2 = "23";
	cout<<s1.multiplyStrings(str1,str2)<<endl;
	str1 = "123";
	str2 = "0";
	cout<<s1.multiplyStrings(str1,str2)<<endl;
	return 0;
}

/*
Multiply two strings
Difficulty: MediumAccuracy: 20.06%Submissions: 246K+Points: 4Average Time: 20m
Given two numbers as strings s1 and s2. Calculate their Product.
Note: The numbers can be negative and You are not allowed to use any built-in function or convert the strings to integers. There can be zeros in the begining of the numbers. You don't need to specify '+' sign in the begining of positive numbers.

Examples:

Input: s1 = "0033", s2 = "2"
Output: "66"
Explanation: 33 * 2 = 66
Input: s1 = "11", s2 = "23"
Output: "253"
Explanation: 11 * 23  = 253
Input: s1 = "123", s2 = "0"
Output: "0"
Explanation: Anything multiplied by 0 is equal to 0.
Constraints:
1 ≤ s1.size() ≤ 103
1 ≤ s2.size() ≤ 103
*/
