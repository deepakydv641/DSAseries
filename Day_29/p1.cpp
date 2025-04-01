//Find length of Loop
// https://bit.ly/3dyXL6m


//approach=Hash Map
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node*temp=head;
        map<Node*,int>mpp;
        int k=0;
    while(temp!=NULL){
        mpp[temp]++;
        if(mpp[temp]>=2&&mpp[temp]<3){
            k++;
        }
        else if(mpp[temp]>=3){
            return k;
        }
        temp=temp->next;
    }
   return 0; }
};

//  T(c)=O(n)
//  S(c)=O(n)
