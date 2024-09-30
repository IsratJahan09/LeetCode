class Solution {
public:
int n, m;
   bool find(int i, int j, vector<vector<char>>& board, int index, string word){
        if(word.size()==index)
        return true;

        if(i<0 or j<0 or i>=n or j>=m or board[i][j] == '$')
        return false;
        if(board[i][j]!=word[index])
        return false;

        int temp = board[i][j];
        board[i][j] = '$';
        if(find(i+1, j, board, index+1, word) or find(i-1, j , board, index+1, word) or find(i, j+1 , board, index+1, word) or find(i, j-1 , board, index+1, word))
        return true;

        board[i][j] = temp;
        return false;

   }


    bool exist(vector<vector<char>>& board, string word) {
         n = board.size();
         m = board[0].size();
        int k = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m;j++){
               if(board[i][j] == word[0] and find(i, j, board, 0, word))
               return true;
            }
        }
        return false;
    }
};
