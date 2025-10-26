#include <bits/stdc++.h>
using namespace std;

//Problem Link: https://workat.tech/problem-solving/practice/percentage

int main() {
	int subjects;
	cin>>subjects;
	int totalMarks = 0;
	float percentage;
	for(int i=0;i<subjects;i++){
		int marks;
		cin>>marks;
		totalMarks += marks;
	}
	
	percentage = ((totalMarks/(float)subjects) * 100)/80;
	
	cout<<fixed<<setprecision(2)<<percentage<<"%"<<endl;
	return 0;
}

/*
Percentage
Beginner
You just saw all your answer scripts after correction at school but haven't received a report card yet. So, you want to find out the percentage that you scored. Assume the total marks for each subject to be 80.

Input Format
First line contains the number of subjects n

Next n lines followed by the marks of each subject mi

Output Format
A single line indicating the percentage scored.

The result should be accurate exactly upto 2 decimal places.

Make sure to include the percent symbol.

Examples
Sample Input
5
77
76
68
72
79
Expected Output
93.00%
Constraints
0 < n <= 100000
0 <= mi <= 80
*/
