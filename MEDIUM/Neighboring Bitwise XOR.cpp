class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int cnt1 = 0, cnt0 = 0;
     for(int i = 0; i<derived.size(); i++){
        if(derived[i]==1)
        cnt1++;
        else
        cnt0++;
     }   
     if(cnt1%2==0) return true;
     else   return false;
    }
};
