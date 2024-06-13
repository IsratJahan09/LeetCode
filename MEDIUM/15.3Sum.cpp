class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
        vector<vector<int>>result;
        for(int i = 0; i<n-2; i++){
            if(i>0 and nums[i]==nums[i-1])
            continue;
            int left = i+1;
            int right = n-1;
            while(left<right){
                
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    ans.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(sum > 0)
                right--;
                else
                left++;
            }
        }
        for(auto v:ans)
         result.push_back(v);
         return result;
    }
};
