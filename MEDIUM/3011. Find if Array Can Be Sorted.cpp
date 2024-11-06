class Solution {
public:
int countset(int n){
      int count = 0;
      while(n){
         count+=n&1;
         n = n>>1;
      }
      return count;
}
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-i-1; j++){
                if(nums[j]>nums[j+1]){
                    if(countset(nums[j])!=countset(nums[j+1])){
                        return false;
                    }
                    else{
                        swap(nums[j], nums[j+1]);
                    }
                }

            }
        }
        return true;
    }
};
