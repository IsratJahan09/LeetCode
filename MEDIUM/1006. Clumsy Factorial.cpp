class Solution {
public:
    int clumsy(int n) {
        int ans = 0;
          if(n==1)
          ans = 1;
         else if(n==2)
          ans = 2;
          else if(n==3)
          ans = 6;
         else if(n==4)
          ans = 7;
         else if(n%4 == 1 or n%4 == 2)
          ans = n+2;
          else if(n%4==3)
          ans = n-1;
          else
          ans = n+1;
          return ans;
        
    }
};
