#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/armstrong-number
string checkArmstrongNumber(int num){
	string result = "No";
	int check = 0;
	int origNum = num;
	while(num>0){
		int digit = num % 10;
		check += digit * digit * digit;
		num = num / 10;
	}
	if(origNum == check)
		result = "Yes";
	
	return result;
}
int main() {
	int testCases;
	cin>>testCases;
	
	for(int i=0;i<testCases;i++){
		int num;
		cin>>num;
		cout<<checkArmstrongNumber(num)<<endl;
	}
	return 0;
}

/*
Armstrong Number
Beginner
A number is known as an Armstrong number if the sum of the cubes of all its digits is equal to the number itself.

Input Format
The first line contains T denoting the no. of test cases.
Next T lines each containing a number.

Output Format
T lines each containing "Yes" (if number is an Armstrong Number) or "No" (if the number is not an armstrong number).

Examples
Sample Input
3
1
12
153
Expected Output
Yes
No
Yes
Explanation:
13 = 1
13 + 23 != 12
13 + 53 + 33 = 153
*/
