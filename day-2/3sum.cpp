class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int start=i+1;
            int end=n-1;
            
            if(nums[i]>0) break;
            
            if(i > 0 && nums[i] == nums[i-1]){ // it is done to remove the dublicates in the array
                continue;
            }
            
            
            while( start<end ){
                
                int sum=nums[i]+nums[start]+nums[end];
                
                if(sum > 0 ) end--;
                else if(sum < 0 ) start++;
                
                if(sum==0){
                    if(end<n-1 && nums[end]==nums[end+1]){ end--;continue;}
                    if(start> i+1  && nums[start]==nums[start-1]){ start++;continue;}
                    vector<int> temp={nums[i],nums[start],nums[end]};
                    
                    ans.push_back(temp);
                    start++;
                    end--;
                }
            }
        }
        return ans;
        
    }
};






