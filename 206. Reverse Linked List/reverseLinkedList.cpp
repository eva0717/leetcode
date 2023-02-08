class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = 0;
        while(current) {
            ListNode* r = previous;
            previous = current;
            current = current->next;
            previous->next = r;
        }
        head = previous;
        return head;
    }
};
