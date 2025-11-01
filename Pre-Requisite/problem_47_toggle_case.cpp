//Problem Link: https://workat.tech/problem-solving/practice/toggle-case
#include <bits/stdc++.h>
using namespace std;
string stringToToggleCase(string inputStr){
	string result = "";
	int n = inputStr.size();
	int asciiA = 65; // 65+25 = 90 //25 added as 65 already inputded, so 25+1=26 alphabets
	int asciia = 97; // 97+25 = 122
	for(int i=0;i<n;i++){
		int inputAscci = inputStr[i];
		if(inputAscci>90){
			int checkAlpha = inputStr[i] - 97;
			result += asciiA + checkAlpha;
		}else{
			int checkAlpha = inputStr[i] - 65;
			result += asciia + checkAlpha;
		}
	}
	return result;
}
int main() {
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		string inputStr = "";
		cin>>inputStr;
		cout<<stringToToggleCase(inputStr)<<endl;
	}
	return 0;
}

/*
Toggle Case
Beginner
Given a string consisting of a mix of uppercase and lowercase characters, toggle the case of each character and print the resultant string.
The string contains only lowercase and uppercase letters.

Input Format
The first line indicating the number of test cases T.
Next T lines will each contain a string.

Output Format
T lines each indicating an output containing the input string with the case of each character flipped.

Examples
Sample Input
11
wElcomE
to
wORKaTTech
tHIs
iS
tHE
kiCKStarT
cOURse
anyone
CAN
CODE
Expected Output
WeLCOMe
TO
WorkAttECH
ThiS
Is
The
KIcksTARt
CourSE
ANYONE
can
code
*/
