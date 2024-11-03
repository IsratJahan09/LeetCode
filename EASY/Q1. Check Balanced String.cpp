class Solution {
public:
    bool isBalanced(string num) {

        int n = num.size();
        int odd = 0; int even = 0;
        for(int i = 0; i<n; i++){
            if(i%2) {
                odd += num[i]-'0';
            }
            else
                even+=num[i]-'0';
        }
        if(even == odd)
            return true;
        else
            return false;
        
    }
};
