class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        int power = 0;
        long long ans  = 0;
       for(int i = 0; i<32; i++){
           ans = (ans<<1) | (n&1);
          n>>=1;
       }
        return ans;
    }
};
