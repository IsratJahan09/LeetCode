class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int color = 0;
        int n = colors.size();
        if(n<3)
            return 0;
        for(int i = 1; i<n-1; i++){
          if(colors[i-1] != colors[i] and colors[i] != colors[i+1])
              color++;
        }
        if(colors[n-1] != colors[0]  and colors[0]!=colors[1])
                  color++;
         if(colors[n-2] != colors[n-1]  and colors[n-1]!=colors[0])
                  color++;
        
        return color;
    }
};
