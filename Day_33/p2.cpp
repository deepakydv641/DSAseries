//Copy List with Random Pointer:  https://leetcode.com/problems/copy-list-with-random-pointer/ 

// approach-1
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*temp=head;
        while(temp!=NULL){
            Node*nn=new Node(temp->val);
            nn->next=temp->next;
            temp->next=nn;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            Node*cpy=temp->next;
           if(temp->random!=NULL){cpy->random=temp->random->next;}
           else{
            cpy->random=NULL;
           }
            temp=temp->next->next;
        }
        temp=head;
        Node*dummy=new Node(0);
        Node*list=dummy;
        while(temp!=NULL){
            Node*nn=temp->next;
            list->next=temp->next;
            list=nn;
            temp->next=list->next;
            temp=temp->next;
        }
    return dummy->next;}
};

//  T(c)=O(n)
// S(c)=O(1)


//approach-2
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*dummy=new Node(0);
        Node*list=dummy;
        Node*temp=head;
        map<Node*,Node*>mpp;
        while(temp!=NULL){
            Node*nn=new Node(temp->val);
            mpp[temp]=nn;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            Node*cpy=mpp[temp];
            cpy->next=mpp[temp->next];
            cpy->random=mpp[temp->random];
            temp=temp->next;
        }
        temp=head;
    return mpp[temp];}
};

//  T(c)=O(n)
//  S(c)=O(n)
