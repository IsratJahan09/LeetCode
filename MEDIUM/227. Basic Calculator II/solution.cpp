class Solution {
public:
    int calculate(string s) {
       int n = s.size();
      stack<int>st;
        int num = 0;
    char sign = '+';
      for(int i = 0; i<n; i++){
        if(isdigit(s[i])){
            num = num*10+(s[i]-'0');
        }
        if((!isdigit(s[i]) and s[i]!=' ') or (i == n-1) ){
            if(sign == '+'){
                st.push(num);
            }
            else if(sign == '-'){
                st.push(-num);
            }
            else if(sign == '*'){
                int top = st.top();
                st.pop();
                st.push(top*num);
            }
            else if(sign == '/'){
                int top = st.top();
                st.pop();
                st.push(top/num);
            }
            num = 0;
            sign = s[i];
        }
      }
      int result = 0;
      while(!st.empty()){
        result+=st.top();
        st.pop();
      }
      return result;
      
    }
};
