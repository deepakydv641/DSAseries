//Delete in a Doubly Linked List
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        Node*dummy=new Node(0);
        dummy->next=head;
        Node*temp=head;
        int k=0;
        while(temp!=NULL){
            k++;
            temp=temp->next;
        }
        int i=0;
        if(x==1){
            if (head == NULL || head->next == NULL) {  
                return nullptr;
            }
            else{
                Node*pre=head->next;
                pre->prev=NULL;
                head->next=NULL;
                return pre;
            }
        }
        temp=head;
        while(temp!=NULL){
            i++;
            if(i==x){
                break;
            }
            temp=temp->next;
        }
        if(i==k){
            Node*post=temp->prev;
            post->next=NULL;
            temp->prev=NULL;
            return dummy->next;
        }
        Node*post=temp->prev;
        Node*pre=temp->next;
        temp->next=NULL;
        temp->prev=NULL;
        post->next=pre;
        pre->prev=post;
    return dummy->next;}
};
