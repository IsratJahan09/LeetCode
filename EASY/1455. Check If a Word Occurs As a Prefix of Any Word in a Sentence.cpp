class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int n = sentence.size();
        int m = searchWord.size();
        int j = 0;
        int ans = 1;
        bool current = true;
        for(int i = 0; i<n; i++){
          if(sentence[i] == ' '){
            current = true;
            j = 0;
            ans ++;
          }
          else if(current and (sentence[i] == searchWord[j])){
            j++;
          }
          else{
            current = false;
            j = 0;
          }
          if(j == m) return ans;
            
        }
        return -1;
    }
};
