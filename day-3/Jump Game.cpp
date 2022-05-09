class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int steps=nums[0];
        for(int i=1;i<n;i++){
            
            if(steps==0) return false;
            // cout<<nums[i]<<' ';
            steps=max(steps-1,nums[i]);
            
        }
        return true;
    }
};

// https://leetcode.com/problems/jump-game/