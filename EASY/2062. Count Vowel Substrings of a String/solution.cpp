class Solution {
public:
    int countVowelSubstrings(string word) {
        set<char>s;
        int k = 0; int j = 0;
        int ans = 0;
        while(k<word.size() or j < word.size()){ 
            if(word[j]  == 'i' or word[j] == 'o' or word[j]  == 'e' or word[j] == 'a' or word[j] == 'u' ){
                s.insert(word[j]);
                j++;
                 
                if(s.size()==5){
                    ans++;
                }
            }
            else{
                s.clear();
                k++;
                j = k;
            }
        }
        return ans;
    }
};
