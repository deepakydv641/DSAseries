//Sort List: https://leetcode.com/problems/sort-list/

//  approach-1
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        int k=0;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            k++;
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        for(auto it:v){
            temp->val=it;
            temp=temp->next;
        }
    return head;}
};
