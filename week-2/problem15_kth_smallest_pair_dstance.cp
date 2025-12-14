//Problem LInk: https://leetcode.com/problems/find-k-th-smallest-pair-distance/
class Solution {
public:
    // int smallestDistancePair(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     vector<int> pairDiff;
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             int diff = abs(nums[i] - nums[j]);
    //             pairDiff.push_back(diff);
    //         }
    //     }
    //     sort(pairDiff.begin(), pairDiff.end());
    //     return pairDiff[k - 1];
    // }
    int countPairsLessThanMid(vector<int>& nums, int mid) {
        int n = nums.size();
        int count = 0;
        int j =0;
        for (int i = 0; i < n; i++) {
            while (j < n && nums[j] - nums[i] <= mid) {
                j++;
            }
            count += (j - i - 1);
        }
        return count;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int start = 0;
        int end = nums[n - 1];
        while (start < end) {
            int mid = start + (end - start) / 2;
            int cntPair = countPairsLessThanMid(nums, mid);
            if (cntPair >= k) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};
