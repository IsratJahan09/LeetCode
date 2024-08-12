class Solution {
public:
    bool isHappy(int n) {
        int sum = n;
        unordered_set<int>s;
         while(n!=1 and s.find(n) == s.end()){
            s.insert(n);
            sum = 0;
            
          while(n>0){
            int t = n%10;
             sum+=t*t;
             n = n/10;
          }
        n = sum;

         }
         if(sum == 1) return true;
         else
         return false;
    }
};
