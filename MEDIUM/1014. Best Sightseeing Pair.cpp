class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int prefix = values[0];
        int maxsc = 0;
        for(int j = 1; j<values.size(); j++){
            maxsc = max(maxsc, prefix+values[j]-j);
            prefix = max(prefix, values[j]+j);
        }
        return maxsc;
    }
};
