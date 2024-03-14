//using java
package leetcode.problem;
import java.util.Scanner;

  
public class Trapping_Rain_Water42 {
    public static void main(String[] args){
        Scanner scan =new Scanner(System.in);
        int n=scan.nextInt();
        int[] a=new int[n];
        
        for(int i=0;i<n;i++)
            a[i]=scan.nextInt();
        
        int [] lb=new int[n];
        int [] rb=new int[n];
        lb[0]=a[0];
        rb[n-1]=a[n-1];
        
        for(int i=1;i<n;i++){
            if(lb[i-1]>a[i])
                lb[i]=lb[i-1];
            else
                lb[i]=a[i];
        }
        
         for(int i=n-2;i>=0;i--){
            if(rb[i+1]>a[i])
                rb[i]=rb[i+1];
            else
                rb[i]=a[i];
        }
         
         int wl=0;
         int res=0;
         int wb=0;
         
         for(int i=1;i<n-1;i++){
             if(lb[i]>rb[i])
                 wl=rb[i];
             else
                 wl=lb[i];
             wb=wl-a[i];
             res=res+wb;     
         }
        System.out.println(res);
    }
}

//using c++
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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lb[n],rb[n];
     lb[0]=a[0];

    rb[n-1]=a[n-1];
   for(int i=1;i<n;i++){
         lb[i]=max(lb[i-1],a[i]);
   }

   for(int i=n-2;i>=0;i--){
    rb[i]=max(rb[i+1],a[i]);
   }

   int lw=0;
    int res=0;
    int wb=0;
   for(int i=1;i<n-1;i++){
    lw=min(rb[i],lb[i]);
    wb=lw-a[i];
    res=res+wb;
   }
   cout<<res<<endl;
    return 0;
}

