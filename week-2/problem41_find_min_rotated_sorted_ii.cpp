//Problem Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/


class Solution {
public:
    int findMin(vector<int>& nums) {
    //    int n = nums.size();
    //    int start = 0, end = n-1;
    //    if(nums.size() == 1)
    //     return nums[start];

    //    if(nums.size() == 2){
    //     if(nums[start] > nums[end])
    //         return nums[end];
    //     else
    //         return nums[start];
    //    } 

    //    if(nums[start] <= nums[end] && nums[start+1] >= nums[start] && nums[end-1] <= nums[end])
    //        return nums[start];

    //    // this works when unique elements in array + one half is sorted and other half is unsorted.
    //    // if both half is sorted then now works i.e not have unique elements 
    //    // e.g 1 2 2 0 1
    //    int mid = 0;
    //    while(start<=end){
    //     mid = start + (end -start)/2;
    //     int next = (mid + 1)%n;
    //     int prev = (mid + n - 1)%n;
    //     if(nums[mid] < nums[prev] && nums[mid] < nums[next])
    //         return nums[mid];
    //     else if(nums[start] <= nums[mid])
    //         start = mid + 1;
    //     else if(nums[mid+1] <= nums[end])
    //         end = mid - 1;
    //    } 
    //    return nums[start];

    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int ans_min = INT_MAX;
    while(start<=end){
        int mid = start + (end - start)/2;

        //if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
        //    return nums[mid];
        if(nums[start] == nums[mid] && nums[mid] == nums[end]){
            ans_min = min(ans_min,nums[start]);
            start++;
            end--;
            cout<<start<<" "<<mid<<" "<<end<<endl;
            continue;
        }

        if(nums[start] <= nums[mid]){
            ans_min = min(ans_min,nums[start]);
            start = mid + 1;
        }else{
            ans_min = min(ans_min,nums[mid]);
            end = mid - 1;
        }    
    }
    return ans_min;    
    }
};



/*
154. Find Minimum in Rotated Sorted Array II
Solved
Hard
Topics
premium lock icon
Companies
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:

[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0
 

Constraints:

n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
nums is sorted and rotated between 1 and n times.
 

Follow up: This problem is similar to Find Minimum in Rotated Sorted Array, but nums may contain duplicates. Would this affect the runtime complexity? How and why?
*/
