//Approach Ist

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL||head->next==NULL) return head;
        ListNode *x= head;
        int len=0;
        while(x) len++, x=x->next;
        k=k%len;
        for(int i=0;i<k;i++){
            ListNode *temp=head;
        while(temp->next->next!=NULL)
          temp=temp->next;  
          ListNode *temp1= temp->next;
          temp1->next= head;
          head= temp1;
          temp->next=NULL;
        }
      return head;
    }
};
//second approach
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL) return head;
        ListNode *x= head;
        int len=0;
        while(x) len++, x=x->next;
        k=k%len;
        if(!k) return head;
        int m= len-k-1;
        ListNode *curr= head;
        while(curr->next!=NULL) curr=curr->next;
        curr->next= head;
        curr=curr->next;
        while(m--)
            curr=curr->next; 
        head= curr->next;
        curr->next=NULL;
      return head;
    }
};