// Delete Node in a Linked List
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==NULL||node->next==NULL){
            return;
        }
        node->val=node->next->val;
        ListNode*list=node->next;
        node->next=node->next->next;
        delete list;
    }
};
