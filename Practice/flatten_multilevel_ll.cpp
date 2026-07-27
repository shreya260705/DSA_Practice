
class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        flattenDFS(head);
        return head;
    }

    Node* flattenDFS(Node* node) {
        Node* curr = node;
        Node* last = nullptr;

        while (curr) {
            Node* next = curr->next;
           
            if (curr->child) {
                Node* childTail = flattenDFS(curr->child);
                curr->next = curr->child;
                curr->child->prev = curr;

                if (next) {
                    childTail->next = next;
                    next->prev = childTail;
                }

                curr->child = nullptr;
                last = childTail;
            } else {
                last = curr;
            }
            curr = next;
        }

        return last;
    }
};