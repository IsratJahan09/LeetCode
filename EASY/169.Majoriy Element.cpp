// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }
//        int mx_e = 0,mx =0;
//         for(auto v: mp){
//             if(v.second>mx){
//                 mx = v.second;
//                 mx_e = v.first;
//             }
//         }
//         // if(mx_e > (nums.size()/2))
//         return mx_e;

//      }
// };

//hashMap
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        for(auto v : nums){
            mp[v]++;
        }
        n=n/2;
       int mx_e = 0;
        for(auto v: mp){
            if(v.second>n){
                mx_e = v.first;
            }
        }
        // if(mx_e > (nums.size()/2))
        return mx_e;

     }
};
*/
//moores voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = 0;
        int n = nums.size();
        for(int i =0 ;i <n; i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(element == nums[i])
                count++;
            
            else
                count--;
            
        }
        // int cnt = 0;
        // for(int i =0; i<nums.size();i++){
        //     if(element == nums[i])
        //     cnt++;
        // }
        // if(cnt > (nums.size()/2))
        // return element;
        int cnt1 = 0;
         for(int i=0;i<n;i++) {
        if(nums[i]==element)cnt1++;
    }
    if(cnt1>n/2)return element;
    return -1;
     }
};
