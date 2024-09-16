//this code is Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        if(nums[l] < nums[r])
          return nums[l];
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]>nums[r])
            l = mid+1;
            else if(nums[mid]<nums[r])
            r = mid;
            else
            r--;
        }
        return nums[l];
    }
};
