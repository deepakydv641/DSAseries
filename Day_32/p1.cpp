// Remove Duplicates from Sorted List II

//  app-1
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>mpp;
        ListNode*temp=head;
        while(temp!=NULL){
            mpp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        ListNode*dummy=new ListNode(0);
        ListNode*list=dummy;
        while(temp!=NULL){
            if(mpp[temp->val]==1){
                ListNode*nn=new ListNode(temp->val);
                list->next=nn;
                nn->next=NULL;
                list=list->next;
            }
            temp=temp->next;
        }
    return dummy->next;}
};

// T(c)=O(n)
//  S(c)=O(n)
