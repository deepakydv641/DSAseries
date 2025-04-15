//

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
