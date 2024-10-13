class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* curr1 =  list1;
       ListNode* curr2 = list2;
       ListNode* dcurr = new ListNode(-1);
       ListNode* curr = dcurr;


       while(curr1!=nullptr and curr2!=nullptr){
            
            if(curr1->val <= curr2->val){
                curr->next = curr1;
                curr = curr1; 
                curr1 = curr1->next; 
            }
            else{
                curr->next = curr2;
                curr = curr2;
                curr2 = curr2->next;
            }
       }
       while(curr1!=nullptr){
        curr->next = curr1;
        curr = curr1; 
        curr1 = curr1->next; 
       }
       while(curr2!=nullptr){
        curr->next = curr2;
        curr = curr2; 
        curr2 = curr2->next; 
       }
       return dcurr->next;
    }
};
