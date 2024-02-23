
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int j=n-1;
        int i=0;
         vector<int> result(2);
        while(i<n-1 && j>i){
            if((nums[i]+nums[j])==target){
                 result[0]=i;
                 result[1]=j;
                 return {i, j};
                break;
            }
             if(j==i+1){
                i++;
                j=n-1;
            }
            else{
                j--;              
            }
        }
        return {};
    }
      
};
/*
//another way
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int j=n-1;
        int i=0;
         vector<int> result;
             while(i<n-1 && j>i){
            if((nums[i]+nums[j])==target){
            result.push_back(i);
            result.push_back(j);
                break;
            }
            if(j==i+1){
                i++;
                j=n-1;
            }
            else{
                j--;
            }
        }
        return result;
    }
      
};


*/



/*........Hard work and consistency is the only way to success........ */
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,target;cin>>n>>target;
    int nums[n];
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int i=0;
    int j=n-1;
     vector<int> result;
     while(i<n-1 && j>i){
            if((nums[i]+nums[j])==target){
            
            result.push_back(i);
            result.push_back(j);
           
                break;
            }
            if(j==i+1){
                i++;
                j=n-1;
            }
            else{
                j--;
               
            }
            

        }
        for(int i=0;i<result.size();i++)
        cout<<result[i];
    
    return 0;
}
*/
