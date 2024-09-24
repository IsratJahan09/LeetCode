class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        for(auto it: intervals){
            if(it[1]<newInterval[0]){
                result.push_back(it);
            }
            else if(it[0]>newInterval[1]){
                result.push_back(newInterval);
                newInterval = it;
            }
            else{
                newInterval[0] = min(it[0], newInterval[0]);
                newInterval[1]  = max(it[1], newInterval[1]);
            }
        }
        result.push_back(newInterval);
        return result;
    }
};

//another way to while loop
