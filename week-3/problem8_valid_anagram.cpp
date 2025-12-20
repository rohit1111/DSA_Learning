//Problem Link: https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int t1 = t.size();
        if(s1 != t1)
            return false;
        int freqS[26] = {0};
        int freqT[26] = {0};
        for(int i=0;i<s1;i++){
            freqS[s[i]-97]++;
            freqT[t[i]-97]++;
        }
        for(int i=0;i<26;i++){
            freqS[i] -= freqT[i];
        }      
        cout<<endl;
        for(auto i:freqS){
            if(i != 0)
                return false;
        }
        return true;        
    }
};


/*
242. Valid Anagram
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
