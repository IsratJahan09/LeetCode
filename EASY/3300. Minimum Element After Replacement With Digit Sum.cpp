class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = 1e9;
        for(auto it : nums){
           int sum = 0;
            while(it>0){
                int temp = it%10;
                it = it/10;
                sum += temp; 
            }
            mini = min(mini, sum);
        } 
        return mini;
    }
};
