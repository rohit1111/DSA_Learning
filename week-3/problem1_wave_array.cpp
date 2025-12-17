//Problem Link: https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?track=amazon-arrays&batchId=192
class Solution {
  public:
    // TC: O(n), O(1)
    void sortInWave(vector<int>& arr) {
            int n = arr.size();
            if(n>=2){
                    int index = 1;
                    while(index < n){
                            swap(arr[index-1],arr[index]);
                            // for(auto i:arr){
                            //     cout<<i<<" ";
                            // }
                            // cout<<endl;
                            index += 2;
                    }
            }
        //return arr; 
    }
};


/*
Wave Array
Difficulty: MediumAccuracy: 63.69%Submissions: 284K+Points: 4Average Time: 20m
Given an sorted array arr[] of integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5] ..... and so on. If there are multiple solutions, find the lexicographically smallest one.

Note: The given array is sorted in ascending order, and modify the given array in-place without returning a new array.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.
Input: arr[] = [2, 4, 7, 8, 9, 10]
Output: [4, 2, 8, 7, 10, 9]
Explanation: Array elements after sorting it in the waveform are 4, 2, 8, 7, 10, 9.
Input: arr[] = [1]
Output: [1]
Constraints:
1 ≤ arr.size ≤ 106
0 ≤ arr[i] ≤109
*/
