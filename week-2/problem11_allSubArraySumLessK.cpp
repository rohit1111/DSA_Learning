// Problem-11 --> Maximum subarray size having all subarrays sums less than k
// Link: https://www.geeksforgeeks.org/dsa/maximum-subarray-size-subarrays-size-sum-less-k/

#include <iostream>
#include <vector>
using namespace std;

//Linear Approach: TC: O(n^3), SC: O(1)
int allSubArraySumLessK(vector<int>& arr, int k){
            int maxSubarray = -1;
            int n = arr.size();
            for(int i=1; i<=n; i++){                                       
                    int sizeOfSubarry = i;                                  // 1, 2, 3
                    int currentSubarrySize = 0;
                    bool notToCOnsider = false;
                    for(int j = 0; j<=n-sizeOfSubarry;j++){                               //i=1, 0- j<n; i=2, 0 -j<n-2;, i=3, 0- j<n-3            
                            int sumOfSubarry = 0;                                                     // 0
                            for(int k=j; k<j+sizeOfSubarry;k++){            // 0 to 2, 1 to 3, 2 to 4, ---> 3 to 5 ////  0 to 3, 1 to 4, 2 to 5
                                    sumOfSubarry += arr[k];                                
                            }
                            
                            if(sumOfSubarry > k){
                                  notToCOnsider = true;
                                  break;
                            }else{
                                  currentSubarrySize = sizeOfSubarry;
                                  //cout<<sumOfSubarry<<" ";
                            }  
                    }
                    //cout<<endl;
                    
                    if(notToCOnsider == false){
                         maxSubarray = max(maxSubarray,currentSubarrySize); 
                         //cout<<"False - maxSubarray: "<< maxSubarray <<", currentSubarrySize: "<<currentSubarrySize<<endl;
                    }else{
                         //maxSubarray = min(maxSubarray,currentSubarrySize);
                         //cout<<"True - maxSubarray: "<< maxSubarray <<", currentSubarrySize: "<<currentSubarrySize<<endl;
                    }
            }
            return maxSubarray;
}
int main()
{
    std::cout<<"Hello World"<<endl;
    // vector<int> arr = {1,2,3,4};
    // int k = 8;
    // vector<int> arr = {1,2,10,4};
    // int k = 8;
    vector<int> arr = {1,2,10,4};
    int k = 14;
    
    //Linear Approach: TC: O(n^3), SC: O(1)    
    cout<<allSubArraySumLessK(arr,k)<<endl;;
    return 0;
}
