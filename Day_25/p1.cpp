//Linked List Insertion At End

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *temp=head;
         Node* nn = new Node(x);
            if(temp==NULL){
                return nn;
            }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        temp->next=nn;
    return head;}
};
