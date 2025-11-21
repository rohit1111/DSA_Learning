//Problem Link: https://www.geeksforgeeks.org/problems/aggressive-cows/0

class Solution {
  public:
    bool canWePlace(vector<int> stalls,int dist,int cows){
        int countCow = 1, last = stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i] - last >= dist){
                countCow++;
                last = stalls[i];
            }
            if(countCow >= cows){
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        //Apprach-1 ---> Linear Apprach --> TLE

        // sort(stalls.begin(),stalls.end());
        // int n = stalls.size();
        // int ans = 0;
        // for(int i=0;i<=stalls[n-1] - stalls[0];i++){
        //     if(canWePlace(stalls,i,k) == true){
        //         ans = i;
        //     }else{
        //         break;
        //     }
        // }
        // return ans;
        
        
        //Apprach-2 - Binary Seach on Answer
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int start = 1, end = stalls[n-1] - stalls[0];
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(canWePlace(stalls,mid,k) == true){
                start = mid + 1;
            }else{
                end = mid - 1; 
            }
        }
        return end;
    }
};


/*
Aggressive Cows
Difficulty: MediumAccuracy: 59.57%Submissions: 181K+Points: 4Average Time: 30m
You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

Examples:

Input: stalls[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows in this case is 3, which is the largest among all possible ways.
Input: stalls[] = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows in this case is 4, which is the largest among all possible ways.
Input: stalls[] = [2, 12, 11, 3, 26, 7], k = 5
Output: 1
Explanation: There are 6 stalls and only 5 cows, we try to place the cows such that the minimum distance between any two cows is as large as possible.
The minimum distance between cows in this case is 1, which is the largest among all possible ways.
Constraints:
2 ≤ stalls.size() ≤ 106
0 ≤ stalls[i] ≤ 108
2 ≤ k ≤ stalls.size()
*/
