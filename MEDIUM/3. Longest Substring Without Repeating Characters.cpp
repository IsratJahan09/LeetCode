//Sliding Window Technique-----O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set <char> st;
        int i = 0, j = 0;
        int maxLen = 0;
        while (i < n && j < n) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                j++;
                maxLen = max (maxLen, j - i);
            } else {
                st.erase(s[i]);
                i++;
            }
        }
        return maxLen;
    }
};

//using vector
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0, maxlen=0;
        int n=s.length();
    vector<char>k;
    while(i<n && j<n){
        if (find(k.begin(), k.end(), s[j]) == k.end()){
            k.push_back(s[j]);
            j++;
            maxlen=max(maxlen, j-i);
        }
        else{
            k.erase(k.begin());
            i++;
        }
    }
   
    return maxlen;
    }
};

/*........Hard work and consistency is the only way to success........ */
/*
////O(n^2)
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
    string s;cin>>s;
    int max_len=0;
    int cnt[256]={0};

    for(int i=0; s[i]!=0;i++){
        int len=0;
        memset(cnt, 0, sizeof(cnt));
        for(int j=i;s[j]!=0;j++){
            if(cnt[s[j]]==0){
                cnt[s[j]]++;
                len++;
            }
            else{
                break;
            }
        }
        max_len=max(len, max_len);
    }
    cout<<max_len<<endl;
    return 0;
}

*/


/*........Hard work and consistency is the only way to success........ */
//O(n^2)
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
// int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
     long long n = s.size();
    long long count = 1;
    long long ans = 0;


    vector<char>k;
    for (int i = 0; s[i]!=0; i++)
    {
        for (int j = i + 1;s[j]!=0; j++)
        {
            if (s[i] != s[j] && find(k.begin(), k.end(), s[j]) == k.end())
            {
                k.push_back(s[j]);
                count++;
            }
            else
            {
                ans = max(ans, count);
                k.clear();
                count = 1;
                break;
            }
        }
        ans = max(ans, count);
    }  
    cout<<ans<<endl;
    return 0;
}
*/
