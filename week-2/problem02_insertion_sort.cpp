//Problem Link: https://www.geeksforgeeks.org/problems/insertion-sort/1
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++){
            int temp = arr[i];
            int j = i-1;
            for(;j>=0;j--){
                if(arr[j] > temp){
                    arr[j+1] = arr[j];
                }else{
                    break;
                }
            }
            arr[j+1] = temp;
        }
        
    }
};


/*

Insertion Sort
Difficulty: EasyAccuracy: 66.61%Submissions: 258K+Points: 2Average Time: 15m
Given an array arr[] of positive integers.The task is to complete the insertsort() function which is used to implement Insertion Sort.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: The sorted array will be [1, 3, 4, 7, 9].
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: The sorted array will be [1, 2, 3, 4, 5, 6, 7, 8, 9, 10].
Input: arr[] = [4, 1, 9]
Output: [1, 4, 9]
Explanation: The sorted array will be [1, 4, 9].
Constraints:
1 ≤ arr.size() ≤ 1000
1 ≤ arr[i] ≤ 1000
*/
