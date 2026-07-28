class Solution {
public:

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return;

        // Step 1: Find Middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse Second Half
        ListNode* second = reverse(slow->next);

        // Break the list
        slow->next = NULL;

        // Step 3: Merge Alternately
        ListNode* first = head;

        while(second)
        {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};