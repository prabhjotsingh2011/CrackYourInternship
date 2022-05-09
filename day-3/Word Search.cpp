class Solution {
public:
    
    bool check(int i,int j,vector<vector<char>> &board, string target,int rows,int cols,int idx){
        if(i>=0 && j>=0 && i<rows && j<cols && board[i][j]!='#'){
            if(board[i][j]==target[idx]) idx++;
            else return false;
            if(idx==target.size()) return true;
            
            char temp=board[i][j];
            board[i][j]='#';
            
            if(check(i-1,j,board,target,rows,cols,idx)) return true;
            if(check(i+1,j,board,target,rows,cols,idx)) return true;
            if(check(i,j-1,board,target,rows,cols,idx)) return true;
            if(check(i,j+1,board,target,rows,cols,idx)) return true;
            
            board[i][j]=temp;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int rows= board.size();
        int cols=board[0].size();
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                
                if(board[i][j] == word[0]){
                    if(check(i,j,board,word,rows,cols,0))   return true;
                    
                }
            }
        }
        
        return false;
    }
};