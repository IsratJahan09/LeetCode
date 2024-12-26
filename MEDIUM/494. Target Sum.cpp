class Solution {  
public:
    int solved(vector<int>& nums, int i, int sum, int& t ){
        if(i==nums.size()){
            if(t == sum) return 1;
            else return 0;
        }
        int pls = solved(nums, i+1, sum+nums[i] , t);
        int mins = solved(nums, i+1, sum-nums[i] , t);
        return pls + mins;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
         return solved(nums, 0 , sum, target);

    }
};
