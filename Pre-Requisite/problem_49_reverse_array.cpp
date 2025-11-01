//Problem Link: https://workat.tech/problem-solving/practice/reverse-array
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int i = 0;
	int j = n-1;
	
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	
	for(auto i:arr){
		cout<<i<<" ";
	}
	
	return 0;
}

/*
Reverse Array
Beginner
Given an array, reverse it.

Input Format
The first line contains n denoting the size of array.
The second line contains n integers denoting the elements of the array.

Output Format
One line containing the n numbers of the array in reverse order

Examples
Sample Input
5
1 5 12 6 -2
Expected Output
-2 6 12 5 1
*/
