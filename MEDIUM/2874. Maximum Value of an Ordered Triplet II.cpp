class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        vector<int>l(n,0), r(n, 0);
        for(int i = 1;i<n; i++){
        l[i] = maxi;
        maxi=max(maxi, nums[i]);
        }
        maxi = nums[n-1];
        for(int i = n-2;i>=0; i--){
        r[i] = maxi;
        maxi=max(maxi, nums[i]);
        }
         long long ans = 0;
        for(int i = 1; i<n; i++){
            ans = max(ans, ((long long)(l[i]-nums[i])*r[i]));
        }
        return ans;
    }
};
