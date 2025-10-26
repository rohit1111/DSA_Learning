#include <bits/stdc++.h>
using namespace std;

int main() {
	// Problem Link: https://workat.tech/problem-solving/practice/words-in-sentence
	string readLine;
	getline(cin,readLine);
	// cout<<readLine<<endl;
	// vector<string> words;
	string temp ="";
	int count = 0;
	for(int i=0;i<readLine.size();i++){
		if(readLine[i] == ' '){
			// words.push_back(temp);
			// temp = "";
			count++;
		}
		else if(readLine[i] != ' ' && i == readLine.size() -1 ){
			count++;			
		}
		temp = temp + readLine[i];
	}
	// for(auto w:words){
	// 	cout<<w<<endl;
	// }
	cout<<count<<endl;
	
	return 0;
}

/*
Words in Sentence
Beginner
Given a sentence, find out the no. of words in the sentence. You can assume that there are no whitespaces before the first word and after the last word in the sentence.

This problem requires you to read line-by-line instead of word-by-word which is the default behavior in most languages.
Google "read line in C++". Replace C++ with the language that you are using.

Input Format
A single sentence

Output Format
The no. of words in the sentence

Examples
Sample Input
The quick brown fox jumped over the lazy dog.
Expected Output
9
Constraints
0 < length of sentence <= 100000
*/
