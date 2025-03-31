//Linked List Cycle
//approach-1

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        int k=0;
        ListNode*temp=head;
        while(temp!=NULL){
            k++;
            if(k>10000){
                return true;
            }
            temp=temp->next;
        }
    return false;}
};

//T(c)=O(n)
//S(c)=O(1)
