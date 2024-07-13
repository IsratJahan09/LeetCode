class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        int total_jump = 0;
        int index_jum = 0;
        int current_jump = 0;
        if(nums.size() == 1) return 0;
        for(int i = 0; i<=n; i++){
           current_jump = max(current_jump, i+nums[i]);
           if(index_jum == i){
            total_jump++;
            index_jum = current_jump;
             if(current_jump >= n)
           return total_jump;

           }
         }
        return total_jump;
    }
};
