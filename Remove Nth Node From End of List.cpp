class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*last=head;
        ListNode*node=head;
        ListNode*pre;
        
        n=n-1;
        
        while(n--)
        {
            last=last->next;
        }
        
        while(last->next!=NULL)
        {
            pre=node;
            node=node->next;
            last=last->next;
        }
        
        if (pre==NULL)
        {
            head=head->next;
        }
        else
        {
        pre->next=node->next;
        
        }
        return head;
    }
};

//T.C = O(n)....single pass solution using 2 pointer.....compexity=O(n-1)+O(total nodes-(n-1))
