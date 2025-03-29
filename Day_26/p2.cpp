//Search in Linked List

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        
        while(head!=NULL){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
    return false;}
};

//  T(c)=O(n)
//  S(c)=O(1)
