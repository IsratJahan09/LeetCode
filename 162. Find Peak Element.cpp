class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0; int r = n-1;
        int ok = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if((mid == 0 or nums[mid] >= nums[mid-1]) and (mid == n-1 or nums[mid] >= nums[mid+1])){
                ok = mid;
                break;
            }
            else if(mid > 0 and nums[mid-1] >= nums[mid])
            r = mid - 1;
            else 
            l = mid+1;
 
        }
        return ok;
    }
};
