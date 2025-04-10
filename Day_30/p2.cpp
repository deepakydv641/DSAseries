//Remove Nth Node From End of List

//  APPROACH=1
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        ListNode*temp=head;
        while(temp!=NULL){
            k++;
            temp=temp->next;
        }
        int z=k-n+1;
        temp=head;
        if(head==NULL){
            return nullptr;
        }
        if(z==1){
            head=head->next;
            delete temp;
            return head;
        }
        ListNode*prev=NULL;
        int i=0;
        while(temp!=NULL){
            i++;
            if(i==z){
                prev->next=temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    return head;}
};
