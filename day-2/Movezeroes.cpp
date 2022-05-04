class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
           if(nums[i]) swap(nums[i],nums[x++]);
        }
        // return nums;
    }
};

// https://leetcode.com/problems/move-zeroes/