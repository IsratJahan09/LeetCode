class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string ans = "";
          int count = 1;
        for(int i = 1; i<n; i++){
            if(word[i]==word[i-1] and count < 9){
                count++;
            }
            else{
                ans+=to_string(count)+word[i-1];
                count = 1;
            }
        }
         ans+=to_string(count)+word[n-1];
         return ans;
    }
};
