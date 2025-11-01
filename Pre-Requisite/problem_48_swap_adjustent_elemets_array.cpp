//Problem Link: https://workat.tech/problem-solving/practice/swap-adjacent
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0;
	int j=i+1;
	
	while(j<n){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i +=2;
		j +=2;
	}
	for(auto i:arr){
		cout<<i<<" ";
	}
	return 0;
}


/*
Swap Adjacent Elements
Beginner
Given an array of integers, swap the elements in pairs.

Examples
Array: [1, 2, 3, 4, 5, 6, 7, 8]
After swap: [2, 1, 4, 3, 6, 5, 8, 7]

Array: [5, 2, 7, 8, 6, 3, 1]
After swap: [2, 5, 8, 7, 3, 6, 1]

Input Format
The first line contains a number N.
The second line contains N numbers representing the elements of the array.

Output Format
One line containing N space-separated integers after the swap.

Examples
Sample Input
8
1 2 3 4 5 6 7 8
Expected Output
2 1 4 3 6 5 8 7
Sample Input
7
5 2 7 8 6 3 1
Expected Output
2 5 8 7 3 6 1
*/
