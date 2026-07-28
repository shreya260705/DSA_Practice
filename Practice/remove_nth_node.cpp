class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        // Move fast n+1 steps ahead
        for(int i = 0; i <= n; i++)
        {
            fast = fast->next;
        }

        // Move both pointers
        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // Delete the node
        ListNode* del = slow->next;
        slow->next = del->next;
        delete del;

        return dummy.next;
    }
};