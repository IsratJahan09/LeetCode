class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int count = 0;
        unordered_set<char> k;
        for(int i = 0; i<n; i++){
            if(i!=0 and (k.find(word[i]) != k.end()) and word[i] == word[i-1]){
                count ++ ;
                
            }
            else{
                k.insert(word[i]);
            }
        }
        return count+1;
    }
};
