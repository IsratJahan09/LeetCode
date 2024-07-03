// class Solution {
// public:
//     int mySqrt(int x) {
        
//        for(int i = 2; i<=x; i++){
//         if(1LL*i*i == x) return i;
//         else if(1LL*i*i > x)
//         return i-1;
//        } 
//        return x;
//     }
// };

// optimal solution
class Solution {
public:
    int mySqrt(int x) {
        if(x <=1)
        return x;
        int l = 1; int r = x;
        while(l<=r){
            int mid = l+(r-l)/2;
            if((1LL*mid*mid) == x)
            return mid;
            else if((1LL*mid*mid)<x)
            l = mid + 1;
            else 
            r = mid - 1;
        }
     return r;
    }
};
