class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    
        // while(left<right){
        //    right = right &(right - 1);
        // }
        // return right;
       int count = 0;
         while(left!=right){
            left>>=1;
            right>>=1;
            count+=1;
         }
         return left<<=count;
    }
};
