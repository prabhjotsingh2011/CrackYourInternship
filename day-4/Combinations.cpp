class Solution {
public:
    
    void helper(int n,int k, vector<vector<int>> &ans,vector<int>&partial, int nums){
        if(partial.size()==k){
            ans.push_back(partial);
            return;
        }
        
        for(int i=nums;i<=n;i++){
            partial.push_back(i);
            helper(n,k,ans,partial,i+1);
            partial.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> partial;
        
        helper(n,k,ans,partial,1);
        return ans;
    }
};

// https://leetcode.com/problems/combinations/