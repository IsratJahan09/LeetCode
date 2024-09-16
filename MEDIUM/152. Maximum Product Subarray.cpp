class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_prod = nums[0];
        int min_prod = nums[0];
        int res = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i]<0)
            swap(max_prod, min_prod);

            max_prod = max(max_prod * nums[i], nums[i]);
            min_prod = min(min_prod * nums[i] , nums[i]);
            
            res = max(res, max_prod);
        }
        return res;
    }
};

//u can use left right method 
