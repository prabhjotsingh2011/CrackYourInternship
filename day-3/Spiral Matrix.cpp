class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows=matrix.size()-1,cols=matrix[0].size()-1,left=0,right=0;
        int x=matrix.size()*matrix[0].size();
        int count=0;
        
        while(count<x){
            for(int i=left,j=right; i<=cols && count<x ;i++){
                ans.push_back(matrix[j][i]);
                count++;
            }
            right++;
            
            for(int i=right,j=cols;i<=rows && count<x; i++){
                ans.push_back(matrix[i][j]);
                count++;
            }
            cols--;
            
            for(int i=cols,j=rows;i>=left &&count<x;i--){
                ans.push_back(matrix[j][i]);
                count++;
            }
            rows--;
            
            for(int i=rows,j=left;i>=right && count<x;i--){
                ans.push_back(matrix[i][j]);
                count++;
            }
            left++;
        }
        return ans;
    }
};


// https://leetcode.com/problems/spiral-matrix/