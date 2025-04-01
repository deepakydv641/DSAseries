//Palindrome Linked List
// https://leetcode.com/problems/palindrome-linked-list/ 

//   BY USING STACK
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode*temp=head;
    stack<int>st;
    int k=0;
    while(temp!=NULL){
        k++;
        temp=temp->next;
    }  
    int n=0; 
    if(k%2==0){
        n=k/2;
    } 
    else{
        n=k/2+1;
    }
    temp=head;
    while(n>0){
        st.push(temp->val);
        temp=temp->next;
        n--;    }
    if(k%2!=0){
        st.pop();
    }
    while(temp!=NULL){
        if(st.top()!=temp->val){
            return false;
        }
        st.pop();
        temp=temp->next;}
   return true; }
};

// T(c)=O(n)
// S(c)=O(n)
