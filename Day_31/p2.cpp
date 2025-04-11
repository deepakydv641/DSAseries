//Add Two Numbers: https://leetcode.com/problems/add-two-numbers/ 

//  approach -1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode(0);
        int k=0;
        ListNode*list3=dummy;
        dummy->next=list3;
         while(l1!=NULL||l2!=NULL||k>0){
            if(l1!=NULL&&l2!=NULL){
                ListNode*nn=new ListNode((l1->val+l2->val+k)%10);
                nn->next=NULL;
                list3->next=nn;
                list3=nn;
                k=(l1->val+l2->val+k)/10;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1!=NULL&&l2==NULL){
                ListNode*nn=new ListNode((l1->val+k)%10);
                nn->next=NULL;
                list3->next=nn;
                list3=nn;
                k=(l1->val+k)/10;
                l1=l1->next;
            }
            else if(l2!=NULL&&l1==NULL){
                ListNode*nn=new ListNode((l2->val+k)%10);
                nn->next=NULL;
                list3->next=nn;
                list3=nn;
                k=(l2->val+k)/10;
                l2=l2->next; 
            }
            else{
                ListNode*nn=new ListNode(k%10);
                nn->next=NULL;
                list3->next=nn;
                list3=nn;
                k=0;
            }
         }
    return dummy->next;}
};
