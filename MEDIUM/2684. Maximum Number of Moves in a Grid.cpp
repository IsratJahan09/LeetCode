class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int col = grid[0].size();
        int row = grid.size();
        vector<vector<int>>dp(row, vector<int>(col, 0));
        for(int cl = col-2; cl>=0; cl--){
            for(int rw = 0; rw<row; rw++){
                if(rw>0 and grid[rw-1][cl+1]>grid[rw][cl]){
                    dp[rw][cl]= max(dp[rw][cl], dp[rw-1][cl+1]+1);
                }
                if( grid[rw][cl+1]>grid[rw][cl]){
                    dp[rw][cl] = max(dp[rw][cl], dp[rw][cl+1]+1);
                }
                if(rw<row-1 and grid[rw+1][cl+1]>grid[rw][cl]){
                    dp[rw][cl] = max(dp[rw][cl], dp[rw+1][cl+1]+1);
                }
            }
        }
        int res = 0;
        for(int i = 0; i<row; i++){
            res = max(res, dp[i][0]);
        }
        return res;
    }
};
