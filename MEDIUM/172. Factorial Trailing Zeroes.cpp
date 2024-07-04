class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        int i = 5;
        int ans = 0;
        while(n/i>=1){
            ans += n/i;
            i*=5;
        }
        return ans;
    }
};
