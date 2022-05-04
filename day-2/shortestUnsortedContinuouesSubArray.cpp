class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> demo(nums.begin(),nums.end());
        sort(demo.begin(),demo.end());
        int n=nums.size(),start=0,end=n-1;
        while(start < n && nums[start]==demo[start]){
            start++;
        }
        while(start < end && nums[end]==demo[end]) end--;
        
        return end-start+1;
    }
};

// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/