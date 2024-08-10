class Solution {
public:
    bool wordPattern(string pattern, string s) {
            vector<string>v;
            unordered_set<string>st;
        unordered_set<char>s1(pattern.begin(),pattern.end());
            string sum = "";
    for(int i = 0; i< s.length(); i++){
        if(s[i] == ' '){ 
            v.push_back(sum);
            st.insert(sum);
            sum = "";
        }
        else
        sum +=s[i];
    }
    
    v.push_back(sum);
    st.insert(sum);
    
    
        if (st.size() != s1.size()) 
          return false;
       if(v.size()!=pattern.size())
       return false;
 
         
    
    unordered_map<char, string>m;
    for(int i =0; i<pattern.size(); i++){
        if(m.find(pattern[i]) == m.end())
        m[pattern[i]] = v[i];
        else if(m.find(pattern[i])!=m.end()){
        if(m[pattern[i]]!=v[i])
         return false;
        }
    }
return true;
    }
};
