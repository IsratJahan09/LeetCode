class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode pre = null;
        ListNode next = null;
        ListNode curr = head;
        while(curr!=null){
            next = curr.next;
            curr.next = pre;
            pre =  curr;
            curr = next;
        }
         return pre;
    }
}
