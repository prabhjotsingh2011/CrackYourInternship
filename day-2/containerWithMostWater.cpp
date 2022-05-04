class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int maxi=INT_MIN;
        while(start < end){
            int mini=min(height[start],height[end]);
            
            maxi=max(maxi,((end-start) * mini));
            if(height[start] < height[end]) start++;
            else end--;
        }
        return maxi;
      
};