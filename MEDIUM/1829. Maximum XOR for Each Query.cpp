class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int>prefix(n);
        prefix[0] = nums[0];
        
        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i-1]^nums[i];
        }

        vector<int>ans;
        int bitmask = (1 << maximumBit)-1;

        for(int i = 0; i<n; i++){
            int current = prefix[i]^bitmask;
            ans.push_back(current);
        }
     reverse(ans.begin(), ans.end());
     return ans;
        
    }
};
