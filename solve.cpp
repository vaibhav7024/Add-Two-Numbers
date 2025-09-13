class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* head=new ListNode(-1);
       ListNode* curr=head;
       int carry=0;
       while(l1||l2||carry!=0){
            int sum=carry;

            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
       }
       return head->next;
    }
};
