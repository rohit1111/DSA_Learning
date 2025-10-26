#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/adjancent-zeros
string checkTwoAdjscentZeros(string binaryNumber){
	string result = "No";
	int adjZero;
	if(binaryNumber[0] == '1')
		adjZero = 1;
	else
		adjZero = 0;
	
	for(int i=1;i<binaryNumber.size();i++){
		int digit;	
		if(binaryNumber[i] == '1')
			digit = 1;
		else
			digit = 0;
		
		adjZero = !(adjZero || digit);	//NOR bitwise operator if both 0 then ony 1, otherwise 0
		if(adjZero == 1){
			result = "Yes";
			break;
		}
		
		adjZero = digit;
	}
	
	return result;
}
int main() {
	int testCases;
	cin>>testCases;
	for(int i=0;i<testCases;i++){
		string binaryNumber;
		cin>>binaryNumber;
		cout<<checkTwoAdjscentZeros(binaryNumber)<<endl;
	}
	return 0;
}


/*
Adjacent Zeros
Beginner
A binary number is a number composed of 0s and 1s.
Given a binary number, check if the number has adjacent zeroes or not, i.e., if two zeroes are present side by side or not.

Input Format
The first line contains T - no. of test cases.

Next T lines each containing one binary number N.

Output Format
"Yes" if the number has adjacent zeroes
"No" if the number does not have adjacent zeroes

Examples
Sample Input
3
1011
10000
1010101001
Expected Output
No
Yes
Yes
Constraints:
0 < T <= 100000
Len(N) < 30
*/
