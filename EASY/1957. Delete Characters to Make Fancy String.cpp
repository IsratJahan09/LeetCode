class Solution {
public:
    string makeFancyString(string s) {
       int n = s.size();
       if(n<=2) return s;
       string k ="";
       k+=s[0];
       k+=s[1];
       for(int i = 2; i<n; i++){
            if(s[i]==s[i-1] and s[i]==s[i-2]){
             continue;
            }
            else{
                k+=s[i];
            }
       }
     
       return k;
    }
};
