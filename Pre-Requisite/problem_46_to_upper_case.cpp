//Problem Link: https://workat.tech/problem-solving/practice/to-upper-case
#include <bits/stdc++.h>
using namespace std;
string stringToUpperCase(string inputStr){
	string result ="";
	int n = inputStr.size();
	int ascciA = 65;
	int asccia = 97;
	for(int i=0;i<n;i++){
		int ascciInput = inputStr[i] - asccia;
		result += ascciInput + ascciA;
	}
	return result;
}
int main() {
	// your code goes here
// 	string str="b";
// 	int ascci = str[0] - 97;
// 	cout<<ascci<<endl;
	
// 	string str1 = "";
// 	int ascciA = 65;
// 	str1[0] = ascciA + ascci;
// 	cout<<str1[0]<<endl;
	
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		string inputStr;
		cin>>inputStr;
		cout<<stringToUpperCase(inputStr)<<endl;
	}
	return 0;
}


/*
To Upper Case
Beginner
Given a string in lowercase, print the string with all characters converted to uppercase.
The string contains only lowercase letters.

Input Format
The first line indicating the number of test cases T.
Next T lines will each contain a string in all lower case characters.

Output Format
T lines each indicating an output containing the input string converted to upper case.

Examples
Sample Input
11
welcome
to
workattech
this
is
the
kickstart
course
anyone
can
code
Expected Output
WELCOME
TO
WORKATTECH
THIS
IS
THE
KICKSTART
COURSE
ANYONE
CAN
CODE
*/
