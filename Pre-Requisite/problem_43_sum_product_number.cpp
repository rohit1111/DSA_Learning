//Problem Link: https://workat.tech/problem-solving/practice/sum-product-number

#include <bits/stdc++.h>
using namespace std;
string sumProductNumber(int num){
	//extract the digit;
	//one to add adn other of product variable
	long sumOfDigits = 0;
	long productOfDigits = 1;
	int tempNum = num;
	while(tempNum > 0){
		int digit = tempNum % 10;
		sumOfDigits += digit;
		productOfDigits *= digit;
		tempNum = tempNum / 10;
	}
	long result = sumOfDigits * productOfDigits;
	//cout<<num<<"-"<<sumOfDigits<<"<--->"<<productOfDigits<<endl;
	if(result == num)
		return "Yes";
	else
		return "No";
	
}
int main() {
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		int num;
		cin>>num;
		cout<<sumProductNumber(num)<<endl;
	}
	return 0;
}


/*
Sum-Product Number
Beginner
A Sum-Product Number is a natural number that is equal to the sum of all its digits multiplied by the product of all its digits.

Given a number check if it is a Sum-Product Number.

If it is a sum-product number, the output should be "Yes", and "No" otherwise.

Input Format
The first line contains T denoting the no. of test cases.
Next T lines each containing a number.

Output Format
T lines each indicating an output - "Yes" or "No"

Examples
Sample Input
5
1
135
45
12
144
Expected Output
Yes
Yes
No
No
Yes
Explanation:
(1) * (1) = 1
(1+3+5) * (1*3*5) = 135
(4+5) * (4*5) = 180
(1+2) * (1*2) = 6
(1+4+4) * (1*4*4) = 144

Constratints:
1 <= T <= 100000
1 <= N <= 100000

*/
