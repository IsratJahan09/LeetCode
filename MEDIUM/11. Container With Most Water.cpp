class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int mx = 0;
        int area = 0;
        while(i<j){
          mx = min(height[i], height[j]);
          mx = mx  * (j-i);
          area = max(area, mx);
          if(height[i] < height[j])
          i++;
          else
          j--;
        }
        return area;
    }
};
