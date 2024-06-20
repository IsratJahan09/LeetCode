TLE
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int l = 1; l<=k ; l++){
//             int temp = nums[n-1];
//         for(int i =n-1; i>0; i--){
//             nums[i] = nums[i-1];
//         }
//          nums[0] = temp;
//         }
       
//     }
// };


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
        k = k%n;
        if(k == 0) return;
        reverse(nums.begin(),nums.end());   //full reverse
        reverse(nums.begin(), nums.begin()+k);   //first k element reverse  
        reverse(nums.begin()+k, nums.end());     // remaining k element reverse
       
    }
};
