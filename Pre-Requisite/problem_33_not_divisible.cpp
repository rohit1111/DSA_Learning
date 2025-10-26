#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/not-divisible
void printNotDivisibleByThree(int num){
	for(int i=1;i<=num;i++){
		if(i%3 != 0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main() {
	int testCases = 0;
	cin>>testCases;
	
	for(int i =0;i<testCases;i++){
		int num;
		cin>>num;
		printNotDivisibleByThree(num);
	}
	return 0;
}


/*
Not Divisible
Beginner
Given a number n, print all the numbers that from 1 to n that are not divisible by 3.

Input Format
The first line indicating the number of test cases - T.

Next T lines will each contain a single number ni.

Output Format
T lines, one for each test case.

Space-seperated and ordered numbers between 1 to ni that are not divisible by 3.

Examples
Sample Input
3
13
6
8
Expected Output
1 2 4 5 7 8 10 11 13
1 2 4 5
1 2 4 5 7 8
Constraints
1 <= T < 100000
1 <= ni <= 100000
*/
