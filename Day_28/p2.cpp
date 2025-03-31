//Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int k=0;
        ListNode*temp=head;
        while(temp!=NULL){
            k++;
            temp=temp->next;
        }
        ListNode*tem=NULL;
        int l=k/2;
        while(head!=NULL){
            
            if(l<=0){
                
                break;
            }
            l--;
            head=head->next;
        }
    return head;}
};

//  T(c)=O(n)
//  S(c)=O(1)
