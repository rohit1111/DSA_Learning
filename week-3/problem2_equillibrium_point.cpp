//Problem Link: https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution {
  public:
    // Function to find equilibrium point in the array.
    // //Linear Approach: O(n^2) SC: O(1) TLE
    // int findEquilibrium(vector<int> &arr) {
    //         int n = arr.size();
    //         int start=0;
    //         int end=n-1;
    //         int pivot=0;
            
    //         while(pivot<n){
    //                 int leftSum=0;
    //                 while(start<pivot){
    //                         leftSum += arr[start];
    //                         start++;
    //                 }
    //                 int rightSum=0;
    //                 while(end>pivot){
    //                         rightSum += arr[end];
    //                         end--;
    //                 }
    //                 if(leftSum == rightSum){
    //                         return pivot;
    //                 }else{
    //                         pivot++;
    //                         start=0;
    //                         end=n-1;
    //                 }
    //         }
    //         return -1;
    // }
    
    //Approach-2: TC: O(n) SC: O(1)
    int findEquilibrium(vector<int> &arr) {
    
            int totalSum =0;
            int n = arr.size();
            for(int i:arr){
                    totalSum += i;
            }
            
            int leftSum=0;
            for(int i=0;i<n;i++){
                    totalSum -= arr[i];
                    if(totalSum == leftSum){
                            return i;
                    }
                    leftSum += arr[i];
            }
            return -1;
    }     
};
