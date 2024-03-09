/*main logic*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode *dummy=new ListNode(0);
      ListNode *temp=dummy;
      int carry=0;
      while (l1!=NULL || l2!=NULL)
      {
       int sum=0;
       if(l1!=NULL){
        sum+=l1->val;
        l1=l1->next;
       }
       if(l2!=NULL){
        sum+=l2->val;
        l2=l2->next;
       }
        
        sum+=carry;
        carry=sum/10;
        
        temp->next=new ListNode(sum%10);
        
        temp=temp->next;
      }
      if(carry==1){
      temp->next=new ListNode(carry);
      }
      return dummy->next;
    }
};

//linkedlist

#include<bits/stdc++.h>
using namespace std;
struct listNode{
  int val;
  listNode*next;
};

listNode *createlinkedlist(listNode *a[],int n){
    listNode *head=NULL;
    listNode *temp=NULL;
    listNode *current=NULL;

    for(int i=0;i<n;i++){
        temp=(listNode *)malloc(sizeof(listNode));
        temp->val=a[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=head;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    return head;
}
int main(){
  int n;cin>>n;
  int m;cin>>m;
  int b[m];
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<m;i++)
  cin>>b[m];

  listNode*l1=createlinkedlist(a,n);
  listNode*l2=createlinkedlist(b,m);
      
      listNode *dummy=new listNode();
      listNode *temp=dummy;
      while (l1!=NULL || l2!=NULL)
      {
       int sum=0;
       if(l1!=NULL){
        sum+=l1->val;
        l1=l1->next;
       }
       if(l2!=NULL){
        sum+=l2->val;
        l2=l2->next;
       }
        
        sum+=carry;
        carry=sum/10;
        
        temp->next=new ListNode(sum%10);
        
        temp=temp->next;
      }
      if(carry==1){
      temp->next=new ListNode(carry);
      }
      return dummy->next;
      
}








// using c++ normal

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
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    vector<int>v1(m);
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<m;i++)
    cin>>v1[i];

    reverse(v.begin(),v.end());
    reverse(v1.begin(),v1.end());

    int sum = 0;
    for(int i = 0; i < n; i++)
     sum = sum * 10 + v[i];

    int sum1 = 0;
    for(int i = 0; i < m; i++)
     sum1 = sum1 * 10 + v1[i];

   // cout<<sum+sum1<<endl;
    string k=to_string(sum+sum1);
    reverse(k.begin(),k.end());
    for(int i=0;i<k.size();i++)
    cout<<k[i]<<" ";

    return 0;
}
