#include <bits/stdc++.h>
using namespace std;
//Problem Link: https://workat.tech/problem-solving/practice/max-in-matrix
int main() {
	int m, n; // m=rows, n=columns 
	cin>>m>>n;
	int maxInt = INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int element;
			cin>>element;
			
			if(element > maxInt)
				maxInt = element;
		}
	}
	cout<<maxInt<<endl;
	return 0;
}



/*
Max in Matrix
Beginner
Given an integer matrix (2D array) of dimension m*n (m rows, n columns), find out the largest integer in the entire matrix.

Input Format
The first line will contain two integers representing the number of rows (m) and columns (n).

Next m lines will contain n integers each.

a11 a12 . . . . a1n
a21 a22 . . . . a2n
.   .  . . . . .
.   .  . . . . .
am1 am2 . . . . amn
Output Format
Value of the largest integer in the matrix.

Examples
Sample Input
2 3
32 45 12
33 11 22
Expected Output
45
Constraints
1 <= m <= 1000
1 <= n <= 1000
0 <= aij <= 100000
*/
