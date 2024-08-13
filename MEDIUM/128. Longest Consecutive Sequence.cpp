class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
        return nums.size();
        sort(nums.begin(), nums.end());
        int count = 1;
        int mx= 1;
        for(int i = 1; i<nums.size(); i++){
           if((nums[i]-nums[i-1]) == 1 ){
            count++;
           }
        else if(nums[i] == nums[i-1]){
          continue;
        }
           else{
              mx = max(mx, count);
              count = 1;
           }
        }
        return max(mx, count);
    }
};
