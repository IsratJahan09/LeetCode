class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int n = word.size();
        unordered_set<char>v{'a', 'e', 'i', 'o', 'u'};
        int total_count = 0;
        for(int i = 0; i<n; i++){
            unordered_set<char>mp;
            int count = 0;
            for(int j = i; j<n; j++){
                if(v.find(word[j])!=v.end())
                mp.insert(word[j]);
                else
                count++;

                if(count == k and mp.size()==5)
                 total_count++;
            }
        }
        return total_count;
    }
};
