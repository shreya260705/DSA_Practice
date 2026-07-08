class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lessd(0),greaterd(0);
        ListNode* less=&lessd;
        ListNode* greater=&greaterd;
        while(head){
            if(head->val<x){
                less->next=head;
                less=less->next;
            }
            else{
                greater->next=head;
                greater=greater->next;
            }
            head=head->next;
        }
        greater->next=NULL;
        less->next=greaterd.next;
        return lessd.next;
        
    }
};




