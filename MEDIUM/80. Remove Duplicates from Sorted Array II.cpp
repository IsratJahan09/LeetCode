class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       // int j = 2;
        // if(nums.size()<=2) return nums.size();
        // for(int i = 2; i<nums.size(); i++){
        //     if(nums[i]!=nums[j-2]){
        //        nums[j] = nums[i];
        //        j++;
        //     }
        // }
        int j = 0;
         for(auto el: nums){
          if(j == 0 || j == 1 || nums[j-2]!=el){
            nums[j] = el;
            j++;
          }
         }
        return j;
    }
};
