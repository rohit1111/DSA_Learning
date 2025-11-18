//Problem: Find target in sorted 2d matrix.

#include <iostream>
#include <vector>

using namespace std;

class Solution{
  public:
    string binarySearch(vector<int> nums,int target){
        string result = "No";
        int n = nums.size();
        
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;        
            if(nums[mid] == target){
                result = "Yes";
                return result;
            }
            
            if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return result;
    }
    string findTargetInSortedMatrixApproach1(vector<vector<int>>& nums, int target){
        
        string result = "No";
        
        int n = nums.size();
        int m = nums[0].size();

        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(nums[i][j] == target){
                   result = "Yes";
                   return result;
               }
           }
        }
        return result;
    }     
    string findTargetInSortedMatrixApproach2(vector<vector<int>>& nums, int target){
        
        string result = "No";
        
        int n = nums.size();
        int m = nums[0].size();

        for(int i=0;i<n;i++){
            if(target >= nums[i][0] && target <= nums[i][m-1]){
                result = binarySearch(nums[i],target);
                return result;
            }
            //cout<<"D-For"<<n<<" "<<m<<i<<endl;
        }
        //cout<<"D-End"<<endl;
        return result;
    }  
    string findTargetInSortedMatrixApproach3(vector<vector<int>>& nums, int target){
        
        string result = "No";
        
        int n = nums.size();
        int m = nums[0].size();

        int start =0;
        int end = n*m -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            
            //Flatteneing 2D array into 1D array
            int row = mid/m;    
            int col = mid%m;
            
            if(nums[row][col] == target){
                result = "Yes";
                return result;
                //break;
            }
            if(nums[row][col]<=target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        
            //cout<<"D-While: "<<start<<" "<<end<<endl;
        }
        //cout<<"D-END"<<endl;
        return result;
    }
};
int main()
{
    int target = 21;
    vector<vector<int>> nums = {{2,4,6,8},{10,12,13,15},{17,18,19,20}};
    Solution s1;
    //Time Complexity = O(log(n*m)), SC = O(1)
    cout<<s1.findTargetInSortedMatrixApproach3(nums,target)<<endl;
    target = 4;
    //Time Complexity = O(n + log(m)) = O(n), SC = O(1)
    cout<<s1.findTargetInSortedMatrixApproach2(nums,target)<<endl;
    target = 6;
    //Time Complexity = O(n*m), SC = O(1)
    cout<<s1.findTargetInSortedMatrixApproach1(nums,target)<<endl;

    return 0;
}
