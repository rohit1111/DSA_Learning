//Problem Link: https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
        // bool isIsomorphic(string s, string t) {
        //         int n = s.size();
        //         int firstPtr=0, secondPtr=0;
        //         vector<pair<char,char>> map;
        //         while(firstPtr<n){
        //                 auto it = find_if(map.begin(),map.end(),
        //                                 [&](const pair<char,char>&p){
        //                                 return p.first == s[firstPtr];});
        //                 if(it != map.end()){
        //                         if(it->first != s[firstPtr] || it->second != t[secondPtr])
        //                                 return false;
        //                         else{
        //                              firstPtr++;
        //                              secondPtr++;   
        //                         }                              
        //                 }else{
        //                       map.push_back({s[firstPtr++],t[secondPtr++]});  
        //                 }                
        //         }
        //         return true;
        // }
        bool isIsomorphic(string s, string t) {
                int n = s.size();
                int firstPtr=0, secondPtr=0;
                vector<pair<char,char>> map;
                while(firstPtr<n){
                        auto it = find_if(map.begin(),map.end(),
                                        [&](const pair<char,char>&p){
                                        return p.first == s[firstPtr];});
                        if(it != map.end()){
                                if(it->second != t[secondPtr])
                                        return false;                     
                        }else{
                              auto it1 = find_if(map.begin(),map.end(),
                                        [&](const pair<char,char>&p){
                                        return p.second == t[secondPtr];}); 
                              if(it1 != map.end())
                                return false;
                              map.push_back({s[firstPtr],t[secondPtr]});  
                        }
                        firstPtr++;
                        secondPtr++;                
                }
                return true;
        }        
};


/*
205. Isomorphic Strings
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:

Input: s = "foo", t = "bar"

Output: false

Explanation:

The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

Example 3:

Input: s = "paper", t = "title"

Output: true

 

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/
