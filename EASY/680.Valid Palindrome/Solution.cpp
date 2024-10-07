class Solution {
public:
    bool validPalindrome(string s) {
          int j = s.size()-1;
        for(int i = 0; i<j;i++,j--){
            if(s[i]!=s[j]){
               int i1 = i+1; int j1 = j;
               while(i1<j1 and s[i1]==s[j1]){
                i1++; j1--;
               }
               if(i1>=j1) return true;
               int i2 = i; int j2 = j-1;
               while(i2<j2 and s[i2] == s[j2]){
                j2--; i2++;
               }
               if(i2>=j2) return true;

               return false;
            }
        }
        return true;
    }
};
