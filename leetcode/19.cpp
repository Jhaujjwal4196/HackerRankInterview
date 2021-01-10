/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        
        int len = 0;
        ListNode *x = head, *prev = NULL;
        
        while(x)
            len++, x = x->next;
        
        int k = 1;
        x = head;
        while(x)
        {
            //cout<<x->val<<" "<<k<<" "<<(len - n +1);nl;
            if(k == len - n + 1)
            {
                //cout<<"inside "<<head->val<<" "<<x->val;nl;
                if(head == x) return head->next;
                prev->next = x->next;
                break;
            }
            
            prev = x;
            x = x->next;
            k++;
        }
        
        return head;
        
    }
};