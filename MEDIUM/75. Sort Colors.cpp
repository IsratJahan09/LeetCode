// class Solution {
// public:
//     void sortColors(vector<int>& nums)
//      { 
//         sort(nums.begin(), nums.end());
//          }
// };


class Solution {
public:
    void sortColors(vector<int>& nums)
    {
       int zero=0;
       int one=0;
       int two =0;
       int len=nums.size();
       for(int i=0;i<len;i++){
         if(nums[i]==0)
         zero++;
         else if(nums[i]==1)
         one++;
         else
         two++;
       }
       nums.clear();
       while(zero>0){
        nums.push_back(0);
        zero--;
       }
       while(one>0){
        nums.push_back(1);
        one--;
       }
       while(two>0){
        nums.push_back(2);
        two--;
       }
    }
};
