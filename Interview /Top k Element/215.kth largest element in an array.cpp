//quick select
int partition(vector<int>&a, int low, int high){
    int pivot = a[high];
    int i = low;
    for(int j = low ; j<high; j++){
       if(a[j] > pivot){
        
        swap(a[i], a[j]);
    //    int temp = a[i];
    //    a[i] = a[j];
    //    a[j] = temp;
        i++;
       }
    }
     
     swap(a[i], a[high]);
    //  int temp = a[i];
    //    a[i] = pivot;
    //    pivot = temp;
    return i;
}
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      int low = 0; int high = nums.size()-1;
      
      int pos = partition(nums, low, high);
      bool check = false;
      while(!check){
          if(k<pos+1){
            high = pos-1;
            pos = partition(nums, low, high);
          }
          else if(k>pos+1){
            low = pos +1;
            pos = partition(nums, low , high);
          }
          else{
            check = true;
          }
      }
      return nums[pos];
    }
};

//Heap (Priority Queue)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
  int n = nums.size();
  if(n<k) return 0 ;
   priority_queue<int>q;
    for(int i = 0 ; i<n; i++){
    q.push(nums[i]);
    }
    // int size = q.size();
    int ans = 0;
     for(int i = 0; i<n;i++){
        if(i == k-1){ 
            ans = q.top();
            break;
        }
        q.pop(); 
     }
     return ans;
    }
};
