class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        int res = 0;
        int count = 1;
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        for(int i = 1; i<n; i++){
            if(intervals[res][1] <= intervals[i][0]){
             count++;
             res = i;
            }
        }
        return n-count;
    }
};
