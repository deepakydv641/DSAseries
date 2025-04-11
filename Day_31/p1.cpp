//Remove Linked List Elements

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*temp=head;
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy;
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }
            else{
                prev=prev->next;
                temp=temp->next;
            }
        }
    return dummy->next;}
};

// T(c)=O(n)
//  S(c)=O(1)
