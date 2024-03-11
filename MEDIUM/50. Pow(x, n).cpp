/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
float power(float x, int y){
    if(y==0)
    return 1;
    if(y<0){
       y=abs(y);
       x=1/x;  
    }
    if(y%2==0){
       double result = power(x,y/2);
        return result*result;
    }
    else{
        return power(x,y-1)*x;
    }
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float x; int y;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}

/*
class Solution {
public:
    double myPow(double x, int n) {
      //  return pow(x,n);  //logn
       if(n==0)
    return 1;
    if(n<0){
        n=abs(n);
        x=1/x;
    }
    if(n%2==0){
       double result =myPow(x,n/2);
        return result*result;
    }
    else{
        return myPow(x,n-1)*x;
    }
    }
};
*/