class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = 0;
        unordered_set<int>s;
        for(int x : nums){
            s.insert(x);
        }
        
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]-1 == nums[i-1]){
                sum+=nums[i];
            }
            else break;
        }
       sum += nums[0];
       for(int i = sum;;i++){
         if(s.find(i)==s.end()){
            return i;
         }
       }
       return 0;

    }
};
