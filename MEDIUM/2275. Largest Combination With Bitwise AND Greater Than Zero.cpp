class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        vector<int>v(24, 0);
        for(int i = 0; i<24; i++){
         for(auto num : candidates){
           if((num & (1 << i)) != 0){
            v[i]++;
             }
           }
       }
        return *max_element(v.begin(), v.end());
    }
};

// explain
// 1<<0 -> 1
// 1<<1 -> 10
// 1<<2 -> 100 (meaning 10 ke 1 bar left shift 100)
