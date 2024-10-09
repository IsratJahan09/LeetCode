class Solution {
public:
    string convert(int it){
                string k = "";
         while(it>0){
               k = (it%2==0?"0":"1")+k;
               it = it/2;
            }
            return k;
    }
     int solve(string s){
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            res = res*2+(s[i]-'0');
        }
        return res;
     }

    int maxGoodNumber(vector<int>& nums) {
        string a = convert(nums[0]);
        string b = convert(nums[1]);
        string c = convert(nums[2]);

         return max({
            solve(a+b+c),
            solve(b+a+c),
            solve(c+a+b),
            solve(b+c+a),
            solve(a+c+b),
            solve(c+b+a)
         });


    }
};
