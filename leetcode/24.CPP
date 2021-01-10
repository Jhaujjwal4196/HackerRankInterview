class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode *second = head->next;
        ListNode *third = head->next->next;
        
        second->next = head;
        head->next = swapPairs(third); //find recursivaly
        
        return second;
    }
};