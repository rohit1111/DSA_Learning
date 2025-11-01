//Problem Link: https://workat.tech/problem-solving/practice/is-sorted\

#include <bits/stdc++.h>
using namespace std;
string checkArraySortedAscending(int n){
	string result ="Yes";
	int arr[n];
	int prev = INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i] < prev){
			result = "No";
			break;
		}else{
			prev = arr[i];
		}
	}
	return result;
}
int main() {
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		int n;
		cin>>n;
		cout<<checkArraySortedAscending(n)<<endl;
	}
	return 0;
}


/*
Is Sorted?
Beginner
Given an array of integers, check if the array is sorted in ascending order.

Input Format
The first line contains t denoting the number of test cases.
For each test case, there is a line containing n denoting the size of the array and a line containing n numbers denoting the array elements.

Output Format
One line containing indicating "Yes" if the array is sorted and "No" if it is not.

Examples
Sample Input
2
5
1 5 12 6 -2
4
12 15 234 456
Expected Output
No
Yes
*/
