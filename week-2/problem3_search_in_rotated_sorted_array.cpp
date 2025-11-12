//Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() -1;
        int n = nums.size();
        while(start<=end){
            int mid = start + (end - start)/2;
            int next = (mid + 1)%n;
            int prev = (mid + n -1)%n;
            //if(nums[mid] < nums[next] && nums[mid] < nums[prev])
            if(nums[mid] == target)
                return true;
            else if(nums[start] < nums[mid])
                start = mid+1;
            else if(nums[mid+1] < nums[end])
                end = mid -1;
        }
        return false;
    }
};


/*
81. Search in Rotated Sorted Array II
Medium
Topics
premium lock icon
Companies
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
nums is guaranteed to be rotated at some pivot.
-104 <= target <= 104
*/
