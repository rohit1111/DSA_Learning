//Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int searchRangeStart(vector<int>& nums, int target){
        int resultFirst=-1;
        int start = 0;
        int end = nums.size()-1;

        while(start<=end){
            int mid = start + (end - start)/2;
            if(target == nums[mid]){
                resultFirst = mid;
                end = mid -1;
            }
            else if (target < nums[mid]){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return resultFirst;
    }
    int searchRangeEnd(vector<int>& nums, int target){
        int resultLast=-1;
        int start = 0;
        int end = nums.size()-1;

        while(start<=end){
            int mid = start + (end - start)/2;
            if(target == nums[mid]){
                resultLast = mid;
                start = mid+1;
            }
            else if (target < nums[mid]){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return resultLast;
    }    
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = -1;
        int lastIndex = -1;
        firstIndex = searchRangeStart(nums,target);
        lastIndex = searchRangeEnd(nums,target);

        return {firstIndex,lastIndex};
    }
};

/*
34. Find First and Last Position of Element in Sorted Array
Solved
Medium
Topics
premium lock icon
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/
