// Problem Link: https://workat.tech/problem-solving/practice/fibonacci-series
#include <bits/stdc++.h>
using namespace std;

int fib(int num){
	if(num == 0)
		return 0;
	if(num == 1)
		return 1;
	int result = fib(num-1) + fib(num-2);
	
	return result;
}

void printFibinacci(int num){
	for(int i=0;i<num;i++){
		cout<<fib(i)<<" ";
	}
}
void printFibinacciOptimize(int num){
	int first = 0;
	int second = 1;
	if(num == 1){
		cout<<first<<" ";
		return;
	}
	if (num == 2){
		cout<<first<<" "<<second<<" ";
		return;
	}
	cout<<first<<" "<<second<<" ";
	for(int i=2;i<num;i++){
		int third = first + second;
		first = second;
		second = third;
		cout<<third<<" ";
	}
}
int main() {
	int testCases;
	cin>>testCases;
	
	for(int i=0;i<testCases;i++){
		int num;
		cin>>num;
		//printFibinacci(num);
		printFibinacciOptimize(num);
		cout<<endl;
	}
	return 0;
}



/*
Fibonacci Series
Beginner
In mathematics, the Fibonacci numbers (Fn) form a sequence, called the Fibonacci sequence, such that each number is the sum of the previous two numbers.

The first number in the sequence (F1) is 0, the second number (F2) is 1.

F1 = 0
F2 = 1
F3 = F1 + F2 = 0 + 1 => 1
F4 = F2 + F3 = 1 + 1 => 2
F5 = F3 + F4 = 1 + 2 => 3
F6 = F4 + F5 = 2 + 3 => 5
.
.
.
Fn = Fn-2 + Fn-1

Given a number (n), print the first n fibonacci numbers.

Example:
The first 6 fibonacci numbers are 0 1 1 2 3 5.

Input Format
The first line contains T denoting the no. of test cases.
Next T lines each containing a number.

Output Format
The first n fibonacci numbers.

Examples
Sample Input
2
1
8
Expected Output
0
0 1 1 2 3 5 8 13
Explanation
F1 = 0
0, 1, 0+1, 1+1, 1+2, 2+3, 3+5, 5+8

Constraints:
n <= 40
*/
