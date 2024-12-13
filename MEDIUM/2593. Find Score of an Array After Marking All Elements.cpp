class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        int l, r;
        long long sum = 0;
        for(r = 0; r<n; r+=2){
            l = r;
            while(r+1<n and nums[r] > nums[r+1])
            r++;

            for(int i = r; i>=l; i-=2){
                sum+=nums[i];
            }
        }

        return sum;

    }
};
