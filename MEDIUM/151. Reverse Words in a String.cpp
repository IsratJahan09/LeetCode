class Solution {
public:
    string reverseWords(string s) {
        int n = s.size()-1;
        string k=""; string l="";
        for(int i = 0; i<=n; i++){
            if(s[i]!=' '){
                k+=s[i];
            }
            else if(!k.empty()){
                if(!l.empty()){
                l =k +' '+l;
                k.clear();
                }
               else{
                 l = k;
                }
                k.clear();
            }

        }
        if(!k.empty()){
            if(!l.empty()){
                l = k + " "+ l;
            }
            else
                l = k;
        }

        return l;
    }
};
