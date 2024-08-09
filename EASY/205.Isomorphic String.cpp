class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();

        int mp[256] ={0};
        int mp1[256] = {0};
        for(int i = 0; i<n; i++){
            if(mp[s[i]]!=mp1[t[i]])
            return false;
            mp[s[i]] = i+1;
            mp1[t[i]] = i+1;
        }
        return true;
    }
};
