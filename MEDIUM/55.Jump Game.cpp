class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mx = nums[0];
        for(int i = 0; i<n; i++){
             if(mx >= n-1) return true;
             if(nums[i] == 0 and mx == i) return false;
             if(nums[i]+i>mx) mx = nums[i]+i; 
        }
        return true;
    }
};
