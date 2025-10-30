//Problem Link: https://workat.tech/problem-solving/practice/n-factorial
#include <bits/stdc++.h>
using namespace std;

long factorial(int num){
	long result = 1;
	if(num == 0 || num == 1)
		return result;
	else{
		for(int i=1;i<=num;i++){
			result *= i; 
		}
	}
	return result;
	
}
int main() {
	int testCases;
	cin>>testCases;
	
	for(int i=0;i<testCases;i++){
		int num;
		cin>>num;
		cout<<factorial(num)<<endl;
	}
	return 0;
}


/*
N Factorial
Beginner
The factorial of a number n is the product of all the integers from 1 to that number n.

Example
Factorial of 5 is 1*2*3*4*5 = 120.

Factorial is not defined for negative numbers, and the factorial of zero is 1.

Please make sure to go through the constraints to estimate the range of factorials.

Input Format
The first line contains T denoting the no. of test cases.
Next T lines each containing a number.

Output Format
The factorial of the number.

Examples
Sample Input
2
1
8
Expected Output
1
40320
Explanation:
1! = 1
1*2*3*4*5*6*7*8 = 40320

Constraints:
0 <= n <= 20
*/
