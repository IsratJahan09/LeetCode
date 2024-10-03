class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(), maximumHeight.end());

        int n = maximumHeight.size();
        int prev = INT_MAX;
        long long sum = 0;
        for(int i = n - 1; i>=0; i--){
              if(maximumHeight[i]<prev){
                sum += maximumHeight[i];
                prev = maximumHeight[i];
              }
              else{
                sum += prev-1;
                prev = prev-1;
              }
              if(prev == 0)
              return -1;
        }
        return sum;
    }
};
