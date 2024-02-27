class Solution {
public:
    int reverse(int x) {
    long long rvrs=0;
    while(x){
        long long dig=x%10;
      rvrs=rvrs*10+dig;
      x=x/10;
    }
    if(rvrs>=INT_MIN && rvrs<=INT_MAX)
    return rvrs;
    else
    return 0; 
    }
};

//Another WAY------->>

class Solution {
public:
    int reverse(int x) {
    int n=x;
    string s;
    s = to_string(n);
    string k = "";
    for (int i = s.size() - 1; i >= 0; i--)
        k += s[i];
    try
    {
        int l = stoi(k);
        if (n < 0)
        {
            return (-1) * l;
        }
        else
        {
            return l;
        }
    }
        catch (...)      //catch (...) is a catch block in C++ that catches any type of exception that might be thrown within the try block
        {
            return 0;
        }
    }
};
