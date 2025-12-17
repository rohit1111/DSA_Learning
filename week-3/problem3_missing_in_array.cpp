//Problem Link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
class Solution {
  public:
    //Linear Approach: TC: O(n) : Integer Overflow
    // int missingNum(vector<int>& arr) {
    //         int n = arr.size();
    //         int maxm = n+1;
    //         int totalSum = maxm * (maxm+1) /2;
    //         //cout<<totalSum<<endl;
    //         for(int i=0;i<n;i++){
    //                 totalSum -= arr[i];
    //         }
    //         return totalSum;
    // }
    
    //Approach-2: 
    int missingNum(vector<int>& arr) {
            long long n = arr.size();
            long long maxm = n+1;
            long long totalSum = maxm * (maxm+1) /2;
            //cout<<totalSum<<endl;
            for(long long i=0;i<n;i++){
                    totalSum -= arr[i];
            }
            return totalSum;
    }
};
