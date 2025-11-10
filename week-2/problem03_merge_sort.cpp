//Problem Link: https://www.geeksforgeeks.org/problems/merge-sort/0

class Solution {
  public:
  
    void merge(vector<int>& arr, int l, int r){
        
        int mid = (l+r)/2;
        
        int len1 = mid - l + 1;
        int len2 = r - mid;
        
        int *first = new int[len1];
        int *second = new int[len2];
        
        int k = l;
        for(int i=0;i<len1;i++){
            first[i] = arr[k++];
        }
        k = mid+1;
        for(int i=0;i<len2;i++){
            second[i] = arr[k++];
        }
        
        int index1 = 0;
        int index2 = 0;
        k = l;
        
        while(index1 < len1 && index2 < len2){
            if(first[index1] < second[index2]){
                arr[k++] = first[index1++];
            }else{
                arr[k++] = second[index2++];
            }
        }
        
        while(index1 < len1){
            arr[k++] = first[index1++];
        }
        
        while(index2 < len2){
            arr[k++] = second[index2++];    
        }
        
        delete []first;
        delete []second;
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        
        if(l >= r)
            return;
            
        int mid = (l+r)/2;    
        
        mergeSort(arr,l, mid);
        
        mergeSort(arr,mid+1, r);
        
        merge(arr,l,r);
        
        
    }
};


/*
Merge Sort
Difficulty: MediumAccuracy: 54.1%Submissions: 267K+Points: 4Average Time: 15m
Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: We get the sorted array after using merge sort
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: We get the sorted array after using merge sort 
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/
