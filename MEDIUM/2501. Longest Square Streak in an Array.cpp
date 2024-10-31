class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        int maxim = 0;
        set<int>s(nums.begin(), nums.end());

        for(auto it : s){

            int count = 0; long long current = it;

           while(s.count(current)){   
                count++;
                current *= current;  
                if (current > 1e9) break;
           }
           maxim = max(maxim , count);
           if(maxim > 5){
            break;
           }
           
        }
        if(maxim>=2)
        return maxim;
        else
        return -1;
    
    }
};
