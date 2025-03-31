//Middle of the Linked List

//approach-1
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL){
            if(fast->next==NULL||fast==NULL){
                return slow;
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
    return slow;}
};

//T(c)=O(n)
//S(c)=O(1)

//approach-2
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
