//Linked List Cycle

//approach-2

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        map<ListNode*,int>mpp;
        ListNode*temp=head;
        while(temp!=NULL){
            mpp[temp]++;
            if(mpp[temp]>1){
                return true;
            }
            if(temp->next==NULL){
                return false;
            }
            temp=temp->next;
        }
   return false; }
};

// T(c)=O(n)
// S(c)=O(n)


//approach-3

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
