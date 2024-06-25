class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>ans(numRows);
        int i = 0;
        bool flag = false;
        if(numRows == 1)
        return s;

        for(auto it : s){
           ans[i] += it;
            if(i == 0 or numRows-1 == i){
              flag = !flag;
            }
            if(flag)
            i++;
            else
            i--;
        }
        string zigzak="";
        for(auto it: ans){
          zigzak+=it;
        }
         return zigzak;
    }
};
