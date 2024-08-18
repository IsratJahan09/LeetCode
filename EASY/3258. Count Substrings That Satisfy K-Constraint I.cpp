class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans = 0;
        int n = s.size();
        for(int i = 0; i<n; i++){
            int one = 0;
            int zero = 0;
            for(int j = i; j<n; j++){
                if(s[j] == '0')
                zero++;
                else
                one++;
                if(zero <= k or one <= k)
                ans++;
            }
        }
        return ans;
    }
};
