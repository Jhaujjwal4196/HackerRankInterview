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
//Iterative Approach
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode *p= head;
        while(p&p->next){
            int temp= p->val;
            p->val= p->next->val;
            p->next->val= temp;

            p=p->next->next;
        }
return head;
    }
};