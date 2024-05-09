class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[len-1];
        //cout << a << b;
        string ans = "";
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return ans;
            }
            ans +=a[i];
        }
        return ans;
    }
};
