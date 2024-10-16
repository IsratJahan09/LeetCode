class Solution {
public:
    void reorderList(ListNode* head) {
                if (!head || !head->next || !head->next->next)
                   return;
        ListNode* solw = head;
        ListNode* fast = head;

        while(fast!=nullptr and fast->next!=nullptr){
            solw = solw->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr;
        ListNode *Current = solw->next;
        ListNode *next = solw;
        while(Current!=nullptr){
            next = Current->next;
            Current->next = prev;
            prev = Current;
            Current = next;
        }
        solw->next = nullptr;


       ListNode* first = head;
        ListNode* second = prev;  
        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            
            first->next = second;
            second->next = temp1;
            
            first = temp1;
            second = temp2;
        }

    }
};
