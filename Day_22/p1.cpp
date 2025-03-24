//Minimum Add to Make Parentheses Valid
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'&& !st.empty()){
                if(st.top()=='(')
                {st.pop();}
                else{
                    st.push(')');
                }
            }
            else{
                st.push(s[i]);
            }
        }
        
    return st.size();}
};
