class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
        int maxi = 0;
        for(int l = 0; l<k; l++){
            int maxistay = 0, maxtravel = 0;
            for(int i = 0; i<n; i++){
                    maxistay = max(stayScore[l][i], maxistay);
                
            
           
                for(int j = 0; j<n; j++){
                    
                    maxtravel = max(travelScore[i][j], maxtravel);
                }
            }

            maxi += max(maxtravel, maxistay);
        
        }
        return maxi;
    }
};
