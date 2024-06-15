//tle

// class Solution {
    
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
        
    
//        long long mx = 0;
//         for(int i = 0; i<nums.size()-k+1; i++){
//            long long sum = 0;
//             unordered_set<int>s;
//             for(int j = i; j<i+k; j++){
//               if(s.find(nums[j])!=s.end()){
//                 sum = 0;
//                 break;
//               }
//              sum += nums[j];
//              s.insert(nums[j]);
//             }
//             mx = max(sum, mx);
//         }
//               return mx;
//     }
// };


//optimal solution

class Solution {
    
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
        int n = nums.size();
       long long mx = 0;
       unordered_map<int, int>mp;
       long long sum = 0;
       int i = 0;
       while(i<k and i<n){
          mp[nums[i]]++;
          sum += nums[i];
          i++;
       }

       if(mp.size() == k) mx = sum;
       while(i<n){
        mp[nums[i]]++;
        mp[nums[i-k]]--;
        if(mp[nums[i-k]]==0) mp.erase(nums[i-k]);

        sum += nums[i];
        sum -= nums[i-k];

        if(mp.size() == k) mx = max(mx, sum);
        i++;
       }
      return mx;
    }
};
