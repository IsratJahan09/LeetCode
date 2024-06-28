class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn = INT_MAX;
        int sum = 0;
        int l = 0, r = 0;
        while(r<nums.size()){
            sum += nums[r];
            while(target <= sum){
                mn = min(mn, r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return mn == INT_MAX?0:mn;
    }
};
