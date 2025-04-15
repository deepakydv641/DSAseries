// Reverse Nodes in k-Group

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        temp=head;
        int z=size/k;
        stack<int>s;
        ListNode*dummy=new ListNode(0);
        ListNode*list=dummy;
        while(z>0){
            int l=k;
            while(l>0){
                s.push(temp->val);
                temp=temp->next;
                l--;
            }
            while(!s.empty()){
                ListNode*nn=new ListNode(s.top());
                list->next=nn;
                nn->next=NULL;
                list=nn;
                s.pop();
            }
            z--;
        }
        list->next=temp;
       return dummy->next; }
};
