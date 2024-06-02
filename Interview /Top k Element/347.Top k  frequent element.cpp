//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    map<int, int>d;
    for(int i = 0; i < n ; i++){
        d[nums[i]]++;
        
    }
    vector<pair<int,int>>v;
    for(auto it : d){
        v.push_back(make_pair(it.second, it.first));
    }
    sort(v.rbegin(),v.rend());
    vector<int>ans;
   for(int i = 0 ; i < v.size() and k!=0 ; i++){
    ans.push_back(v[i].second);
    k--;
     }
   return ans; 
   }
};


// another solution is priority queue
