class Solution {
public:
    int countSubstrings(string s) {
       int n = s.size();
       int count = 0;

       for(int i = 0; i<n; i++){
        int l = i; int r = i;
        if(l>=0 and r<n){
        while(l>=0 and r<n and s[l]==s[r]) {
                l--; r++;
                count++;
            }
          }
        }
       
    
        for(int i = 0; i<n; i++){
            int l = i; int r = i+1;
            if(l>=0 and r<n){
                while(l>=0 and r<n and s[l] == s[r]){
                    l--; r++;
                    count++;
                }
            }
        }
       
       return count;
       
    }
};
