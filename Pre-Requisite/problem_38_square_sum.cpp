#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/square-sum
int squareSum(int num){
	int sqSum = 0;
	while(num > 0){
		int digit = num % 10;
		sqSum += digit * digit;
		num = num / 10;
	}
	return sqSum;
}
int main() {
	int testCases;
	cin>>testCases;
	
	for(int i=0;i<testCases;i++){
		int num;
		cin>>num;
		cout<<squareSum(num)<<endl;
	}
	return 0;
}


/*
Square Sum
Beginner
Given a number, find out the sum of squares of all its digits.

If the number is represented as d1d2d3, then the sum will be d12 + d22 + d32

Input Format
The first line contains T denoting the no. of test cases
Next T lines each containing a number.

Output Format
For each test, sum of squares of the digits of the number.

Examples
Sample Input
2
12
13246
Expected Output
5
66
Explanation
12 → 12 + 22 = 5

13246 → 12 + 32 + 22 + 42 + 62 = 66
*/
