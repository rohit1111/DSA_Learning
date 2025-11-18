//Problem: Search in row and column sorted 2d matrix

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums,int target){
        //string result = "No";
        int n = nums.size();
        int start = 0, end = n -1;

        while(start<=end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                //result = "Yes";
                return mid;
            }
            if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }
    vector<int> searchInRowSorted2DMatrixApproach1(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        string result = "No";
        for(int i=0;i<n;i++){
            if(k >= matrix[i][0] && k <= matrix[i][n-1]){
                int index = binarySearch(matrix[i],k);
                if(index != -1)
                    return {i,index};
            }
        }
        return {-1,-1};
    }
    vector<int> searchInRowSorted2DMatrixApproach2(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int row = 0;
        int col = n-1;
        
        while(row<n && col>=0){
            if(matrix[row][col] == k)
                return {row,col};
            if(matrix[row][col] < k){
                row++;
            }else{
                col--;
            }
        }
        return {-1,-1};
    }    
};
int main()
{
    int target = 20;
    vector<vector<int>> nums = {{2,4,6,8},{3,5,10,15},{1,7,19,20},{9,11,12,13}};
    Solution s1;
    //Time Complexity: O(n * log(m)), SC: O(1)
    vector<int> result = s1.searchInRowSorted2DMatrixApproach1(nums,target);
    for(auto i:result){
        cout<<i<<" ";
    }
    cout<<endl;

    //Time Complexity: O(n + n), SC: O(1)
    target = 20;
    result.clear();
    result = s1.searchInRowSorted2DMatrixApproach2(nums,target);
    for(auto i:result){
        cout<<i<<" ";
    }

    return 0;
}
