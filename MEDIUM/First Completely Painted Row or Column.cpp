class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = arr.size();

        int n2 = mat.size();
        int n1 = mat[0].size();
        int c1 = 0;
        vector<int>r(n2, n1), c(n1, n2);
        unordered_map<int, pair<int, int>>mp;
        for(int i=0; i<n2; i++){
            for(int j = 0; j<n1; j++){
                mp[mat[i][j]] = {i, j};      
            }
        }
        for(int i = 0; i<n; i++){
          auto [row, col]  = mp[arr[i]];
       int nn =  --r[row]; int mm = --c[col];
        if(nn == 0 || mm == 0) {
            c1 = i; break;
        }
           
        }

        return c1;
    }
};
