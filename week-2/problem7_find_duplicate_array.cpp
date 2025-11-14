//Problem Link: https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        //Approach-1 - TLE
        // int n = arr.size();
        // int start = 0;
        // int end = n - 1;
        
        // int mid = start + (end - start)/2;
        // vector<int> result;
        // for(int i=0;i<n-1;i++){
        //     //cout<<i<<" ";
        //     for(int j=i+1;j<n;j++){
        //         //cout<<j<<endl;
        //         if(arr[i] == arr[j]){
        //             result.push_back(arr[i]);
        //         }
        //     }   
        // }
        // return result;
        
        
        //Approach-2
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i =0;
        int j= n-1;
        vector<int> result;
        while(i<j){
            //cout<<arr[i] << " i " << arr[i+1]<<endl;
            if(arr[i] == arr[i+1])
                result.push_back(arr[i]);
            //cout<<arr[j] << " j " << arr[j-1]<<endl;
            
            if(arr[i] != arr[j] && arr[j] == arr[j-1])
                result.push_back(arr[j]);
            i = i+1;
            j = j-1;
        }
        
        return result;
    }
};


/*
Array Duplicates
Difficulty: EasyAccuracy: 18.95%Submissions: 869K+Points: 2Average Time: 20m
Given an array arr[] of size n, containing elements from the range 1 to n, and each element appears at most twice, return an array of all the integers that appears twice.

Note: You can return the elements in any order but the driver code will print them in sorted order.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [3, 1, 2] 
Output: []
Explanation: There is no repeating element in the array, so the output is empty.
Constraints:
1 ≤ n ≤ 106
1 ≤ arr[i] ≤ n
*/
