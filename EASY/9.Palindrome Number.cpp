class Solution {
public:
    bool isPalindrome(int x) {
        long long n=x;
        
       long long reverse=0;
       long long  digit=0;
       while(n>0){
           digit=n%10;
           reverse=reverse*10+digit;
           n=n/10;
       }
       if(reverse==x)
       return true;
       else 
       return false;
 
    }
};