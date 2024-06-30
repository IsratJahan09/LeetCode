class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        long long result = 0;
        stack<long long>st;
        for(int i = 0; i<tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "/" || tokens[i] == "*" || tokens[i] == "-"){
                 long long a = st.top();
                 st.pop();
                long long  b = st.top();
                 st.pop();
                 if(tokens[i] == "+") 
                 result = a+b;
                 else if(tokens[i] == "-")
                 result= b-a;
                 else if(tokens[i] == "/")
                 result = b/a;
                else if(tokens[i] == "*")
                 result = a*b;
                st.push(result);
            }
            else{
                long long n = stoll(tokens[i]);
                st.push(n);
            }
        }
      return (long long)st.top();
    }
};
