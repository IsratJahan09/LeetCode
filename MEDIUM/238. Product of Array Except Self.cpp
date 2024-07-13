class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int n = nums.size();
        // vector<int>left(n);
        // vector<int>right(n);
        // left[0] = 1;
        // right[nums.size()-1] = 1;

          
        // for(int i = 1; i<nums.size(); i++){
        //     left[i] = left[i-1] * nums[i-1];

        // }
        // for(int i = nums.size()-2; i>=0; i--){
        //     right[i] = right[i+1] * nums[i+1];
        // }
        // for(int i = 0; i<nums.size(); i++)
        //  nums[i] = left[i] * right[i];
        // return nums;
        vector<int>s;
        vector<int>k;
        s.push_back(product);
        for(int i = 1; i<n; i++){
        product *= nums[i-1];
        s.push_back(product);
        }
        product = 1;
        k.push_back(product);
        for(int i = n-2; i>=0; i--){
        product *= nums[i+1];
        k.push_back(product);
        }
        for(int i = 0; i<n; i++)
        nums[i] = s[i] * k[n-i-1];
        return nums;

    }
};
