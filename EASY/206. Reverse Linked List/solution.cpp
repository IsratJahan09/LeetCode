class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* next = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr){
            next = curr->next;
            curr->next = pre;
            pre =  curr;
            curr = next;
        }
         return pre;
        
    }
};
