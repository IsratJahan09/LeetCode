class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1) return s;
       int  n = s.length();
        int max_len = 1;

     //odd length;
        int st=0, end=0;
     
            for(int i = 0; i < n-1; i++){
               int l = i; int r = i;
                while(l>=0 and r<n){
                    if(s[l]==s[r]){
                    l--;    r++;
                    }
                    else
                    break;
                }
               int curr_len = r-l-1;
                if(curr_len > max_len){
                    max_len = curr_len;
                    st=l+1;
                    end=r-1;
                }
            }
        

     //even len
   
        for(int i=0; i < n-1; i++){
            int l=i, r=i+1;
            while(l >= 0 and r < n){
                if(s[l] == s[r]){
                    l--; r++;
                }
                else
                break;
            }
            int curr_len = r - l - 1;
            if(max_len<curr_len){
                max_len = curr_len;
                st = l + 1;
                end = r - 1;
            }
        }
     return s.substr(st , max_len);

    }
};
