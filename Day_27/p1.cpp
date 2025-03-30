//Reverse a Doubly Linked List
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        stack<int>st;
        DLLNode*temp=head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        DLLNode*dummy=new DLLNode(0);
        dummy->next=head;
        head->prev=dummy;
        DLLNode*peak=dummy;
        while(!st.empty()){
            DLLNode*nn=new DLLNode(st.top());
            nn->prev=peak;
            nn->next=NULL;
            peak->next=nn;
            peak=peak->next;
            st.pop();
        }
    return dummy->next;}
};

//   T(c)=O(n)
//   S(c)=O(n)
