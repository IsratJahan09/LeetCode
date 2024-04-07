class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN and divisor==-1)
        return INT_MAX;
    
       long long k=dividend/divisor;
       if(k>INT_MAX)
       return INT_MAX;
       if(k<INT_MIN)
       return INT_MIN;
       return k;
    }
};
