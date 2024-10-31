class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int col = matrix[0].size();
        int row = matrix.size();

        vector<vector<int>>dp(row, vector<int>(col, 0));

        for(int i = 0; i<row; i++) dp[i][0] = matrix[i][0];

        for(int j = 0; j<col; j++) dp[0][j] = matrix[0][j];

       for(int i = 1; i<row; i++){
        for(int j = 1; j<col; j++){
            if(matrix[i][j] == 0) 
            dp[i][j] = 0;
            else{
                dp[i][j] = 1+min(dp[i-1][j] , min(dp[i][j-1], dp[i-1][j-1]));
            }
        }

       }
       int sum = 0;
       for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            sum+=dp[i][j];
        }
       }
       return sum;

    }
};
