//Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        int found = -1;
        if(n == 1)
            return nums[0];
        while(start<=end){
            int mid = start + (end - start)/2;
            if(mid == 0 && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid == n-1 && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            if(mid%2 == 0){
                //Mid is even
                if(nums[mid] == nums[mid+1]){
                    //If Yes, then target lies in second half
                    start = mid+1;
                }else{
                    //target lies in first half
                    end = mid-1;
                }
            }else{
                //Mid is odd 
                if(nums[mid] == nums[mid+1]){
                    //target lies in first half
                    end = mid -1;
                }else
                    //target lies in second half
                    start = mid +1;
            }
        }
        return 0;
    }
};


/*
540. Single Element in a Sorted Array
Solved
Medium
Topics
premium lock icon
Companies
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 105
0 <= nums[i] <= 105
*/
