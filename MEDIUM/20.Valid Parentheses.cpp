/*........Hard work and consistency is the only way to success........ */
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
    string s;
    cin>>s;
    int n=s.size();
    stack<char>str;
  for(int i=0;i<n;i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='{')
     str.push(s[i]);
    else if(s[i]==')' ){
      if(!str.empty() && str.top()=='('){
        str.pop();
      }
     else
      str.push(s[i]); 
    } 
    else if(s[i]==']'){
      if(!str.empty() && str.top()=='['){
        str.pop();
      }
     else
      str.push(s[i]); 
    }
     else if( s[i]=='}'){
      if(!str.empty() && str.top()=='{'){
        str.pop();
      }
     else
      str.push(s[i]); 
    }
  }
  if(str.empty())
  cout<<"true"<<endl;
  else
  cout<<"false"<<endl;
    return 0;
}