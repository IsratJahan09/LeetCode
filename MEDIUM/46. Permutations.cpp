//using stl

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());   //must be sorted
        do{
            v.push_back(nums);
        }
       while(next_permutation(nums.begin(),nums.end()));
       return v;
    }
};

//using backtracking
class Solution {
public:
void permutation(int fi, int n, vector<int>&a ,  vector<vector<int>>&v ){
    if(fi==n-1){            //fi means fixed index
    v.push_back(a);
    return;
    }
    for(int i=fi;i<n;i++){
        swap(a[i],a[fi]);
        permutation(fi+1,n,a,v);
        swap(a[i],a[fi]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
       int n=nums.size();
       int fi=0;
       permutation(fi,n,nums,v);
       return v;
    }
};
