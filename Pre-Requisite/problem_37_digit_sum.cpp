#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/digit-sum
int digitSum(int num){
	int sum=0;
	while(num>0){
		int digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	return sum;
}
int main() {
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		int num;
		cin>>num;
		cout<<digitSum(num)<<endl;
	}
	return 0;
}


/*
Digit Sum
Beginner
Given a number, find the sum of its digits.

If the number is represented as d1d2d3d4d5, then the sum will be d1 + d2 + d3 + d4 + d5.

Input Format
The first line contains T denoting the no. of test cases
Next T lines each containing a number

Output Format
For each test, a line with sum of digits of the number.

Examples
Sample Input
2
13246
12212
Expected Output
16
8
Explanation
13246 → 1 + 3 + 2 + 4 + 6 = 16

12212 → 1 + 2 + 2 + 1 + 2 = 8
*/
