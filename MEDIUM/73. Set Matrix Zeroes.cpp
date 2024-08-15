class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       vector<vector<int>>visit = matrix;
       for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            if(matrix[i][j] == 0){
                for(int k = 0; k<m; k++){
                  visit[i][k] = 0;
                }
            }
        }
       }
       for(int i =0; i<n; i++){
        for(int j =0; j<m;j++){
            if(matrix[i][j] == 0){
                for(int k = 0; k<n; k++){
                  visit[k][j] = 0;
                }
            }
        }
       }
       for(int i = 0; i<n; i++){
         for(int j = 0; j<m;j++){
            matrix[i][j] = visit[i][j];
         }
       }
    }
};

/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> rows(m,0), cols(n,0);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i] || cols[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};*/
