//Rotate List  :   https://leetcode.com/problems/rotate-list/description/

//  approach = by converting single linked list to circular linked list
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode*temp=head;
        int size=1;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
            
        }
        temp->next=head;
        temp=temp->next;
        if(k>=size){
            k=k%size;
        }
        int z=size-k;
        while(z>1){
            temp=temp->next;
            z--;
        }
        map<ListNode*,int>mpp;
        while(mpp[temp]<1){
            mpp[temp]++;
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
    return head;}
};

//  T(c)=O(n)
//  S(c)=O(n)
