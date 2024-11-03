class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
         if(n!=m) return false;
         s = s+s;
         if(s.find(goal)!=-1)
         return true;
         else
         return false;
    }
};
