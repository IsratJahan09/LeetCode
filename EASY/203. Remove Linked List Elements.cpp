 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return nullptr;
       while(head != nullptr && head -> val == val){
         head = head -> next;
          }

        ListNode* temp = head;
        while(temp!=nullptr && temp->next!=nullptr ){
            if(temp->next->val==val){
                temp->next = temp->next->next; 
            }
            else
            temp = temp->next;
        }
    
        return head;
    }
};
