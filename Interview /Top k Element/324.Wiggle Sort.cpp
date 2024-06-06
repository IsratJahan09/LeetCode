class Solution {
public:
    void wiggleSort(vector<int>& nums) {
       priority_queue<int> q;
        
        for(auto it : nums )
        q.push(it);
        int n = q.size();
        vector<int> v(n);
        for(int i = 1; i < n; i += 2){
            v[i] = q.top();
            q.pop();
        }

        for(int i = 0 ; i<n ; i+=2){
            v[i] = q.top();
            q.pop();
        }

        nums = v;
        return;
    }
};
