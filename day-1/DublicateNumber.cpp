class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // *********optimized*********
        
       int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[slow]];
        }while(slow!=fast);
        
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
            
        
        // ***********with extra space *********
    //      unordered_map<int, int> m;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     m[nums[i]]++;
    // }
    // for (auto &it : m)
    // {
    //     if (it.second > 1)
    //     {
    //         return it.first;
    //     }
    // }
    //     return 0;
    
        
        
//         ***********brute force approach***************
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return -1;
    }
};