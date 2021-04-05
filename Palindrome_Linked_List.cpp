class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        string s1="";
        string s2="";
        s1+=char('0'+temp->val);
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
            
            //s1=s1+char('0'+temp->val);//dont do like this ...as it will give TLE because u are creating copy of s1 in every iteration.
            
            // refer this link: 
            //    https://discuss.codechef.com/t/need-help-with-palindrome-linked-list-leetcode/87603
            
            s1+=char('0'+temp->val);// instead do like this 
            
            
        
            
            
        }
        
        s2=s1;
        reverse(s2.begin(),s2.end());
        cout<<s1<<endl;
        cout<<s2<<endl;
        
        if (s1==s2)
            return true;
        else
            return false;
        
    }
};