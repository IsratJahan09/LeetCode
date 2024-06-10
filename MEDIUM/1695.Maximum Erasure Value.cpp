
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> cha;
        int  i, j = 0;
        int sum = 0; 
        int mx = 0;
        for(int i = 0 , j = 0; j<n; j++){
            while (cha.find(nums[j]) != cha.end()) {
                cha.erase(nums[i]);
                  sum -= nums[i++];

                
            }
            
                cha.insert(nums[j]);
                sum+=nums[j];
                mx = max(mx, sum);
            
        
            
        }
            return mx;

    }
};             

/*

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> cha;
        int  i, j = 0;
        int sum = 0; 
        int mx = 0;
        while( j<n){
            while (cha.find(nums[j]) != cha.end()) {
                sum -= nums[i];
                cha.erase(nums[i]);
                i++;
            }
            
                cha.insert(nums[j]);
                sum+=nums[j];
                mx = max(mx, sum);
                j++;
        
            
        }
            return mx;

    }
};             */
