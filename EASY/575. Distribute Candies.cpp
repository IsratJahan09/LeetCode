class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
         set<int>s;
         for(int i = 0; i<n; i++){
            s.insert(candyType[i]);
         }
         n = n/2;
         if(s.size()>n)
         return n;
         else
         return s.size();
    }
};
