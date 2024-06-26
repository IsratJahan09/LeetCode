class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.size()-1;
         int l = 0;
         while(l<r){
        while(l<r and !isalnum(s[l])) l++;
        while(l<r and !isalnum(s[r])) r--;
        if(tolower(s[l])!=tolower(s[r]))
            return false;
         l++;
         r--;
        }
        return true;
    
    }
};

/*
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size()-1;
        if(s.empty())
        return true;
        int i = 0; int j = n;
        string k,l="";
       while(i<=n){
     if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i]>='0' and s[i]<='9')) {
            k += tolower(s[i]);

        }
     if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') ||  (s[i]>='0' and s[i]<='9')) {
       l += tolower(s[j]); 
        }

        j--; i++;
       }
       if(l == k)
       return true;
       else
       return false;
    
    }
};*/
