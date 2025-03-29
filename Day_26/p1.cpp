//Doubly linked list Insertion at given position
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
       Node*temp=head;
       int i=0;
       while(temp!=NULL){
           
           if(i==pos){
               break;
           }
           i++;
           temp=temp->next;
       }
       Node*p=temp;
       temp=temp->next;
       Node*nn=new Node(data);
       nn->prev=p;
       nn->next=temp;
       p->next=nn;
       if(temp!=NULL){
            temp->prev=nn;
       }   
    return head;}
};

//T(C)=O(n)
//S(c)=O(1)
