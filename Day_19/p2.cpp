// Maximum Nesting Depth of the Parentheses
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                int x=st.size();
                maxi=max(maxi,x);
            }
            else if(s[i]==')'){
                st.pop();
            }
            
        }
    return maxi;}
};

//T(c)=o(n);
// s(c)=o(n)
