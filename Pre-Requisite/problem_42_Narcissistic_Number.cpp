//Problem Link: https://workat.tech/problem-solving/practice/narcissistic-number

#include <bits/stdc++.h>
using namespace std;
long power(int digit, int pw){
	int result = digit;
	for(int i=1;i<pw;i++){
		result *= digit;
	}
	return result;
}
string checkNarcissistic(int num){
	//count digits n number;
	int countDigits = 0;
	int tempNum = num;
	while(tempNum > 0){
		int digit = tempNum % 10;
		countDigits++;
		tempNum = tempNum / 10;
	}
	//add each digits power of no. of digits
	long sumOfPower = 0;
	tempNum = num;
	while(tempNum > 0){
		int digit = tempNum % 10;
		sumOfPower += power(digit,countDigits);
		//cout<<power(digit,countDigits) << "@@"<<digit<<endl;
		tempNum = tempNum / 10;
	}
	//check if power of sum == origincal number
	string result = "";
	//cout<<sumOfPower<<"<--->"<<num<<"--"<<countDigits<<endl;
	if(sumOfPower == (long)num)
		result = "Yes";
	else
		result = "No";
	
	return result;
}
int main() {
	int testCases;
	cin>>testCases;
	
	for(int i=0;i<testCases;i++){
		int num;
		cin>>num;
		cout<<checkNarcissistic(num)<<endl;
	}
	return 0;
}



/*
Narcissistic Number
Beginner
A n digit number N is known as a Narcissistic number if the sum of all its digits raised to the power of n is equal to the number itself.

Examples
N = 153
n = 3 (No of digits)
13 + 53 + 33 = 1 + 125 + 27 (153)
Therefore, 153 is a Narcissistic number.

N = 1
n = 1 (No of digits)
11 = 1
Therefore, 1 is a Narcissistic number.

N = 11
n = 2 (No of digits)
12 + 12 = 2
Therefore, 11 is not a Narcissistic number.

If N, an n digit number is represented as d1d2.....dn-2dn-1dn, then the output shall be:

"Yes" if  d1n + d2n + .... + dnn = N
"No"  if d1n + d2n + .... +  dnn  != N
Input Format
The first line contains T denoting the no. of test cases.
Next T lines each containing a number.

Output Format
Yes (if N is a Narcissistic number)
No (if N is not a Narcissistic number)

Examples
Sample Input
3
24
153
10
Expected Output
No
Yes
No
Explanation
22 + 42 != 24
13 + 53 + 33 = 153
12 + 02 != 10

Constraints:
0 <= T < 100000
0 <= N < 100000


*/
