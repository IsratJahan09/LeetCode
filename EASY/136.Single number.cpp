class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        long long n = nums.size();
        long long ans = nums[0];
        for(int i = 1; i<n; i++){
            ans^=nums[i];
        }
     return ans;
    }
};
