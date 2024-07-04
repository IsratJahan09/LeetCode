class Solution {
public:
    int hammingWeight(int n) {
       int count = 0;
       while(n){
        count += (n&1);        // check last bit on or off (1, 0)
        n = n >> 1;            // example: 9 == 1001 == 0100 == 0010 == 0001 == 0000
       } 
       return count;
    }
};
