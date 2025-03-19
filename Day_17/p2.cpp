//Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                sum+=-1;
                if(sum!=0){
                 ans+=s[i];}
            }
            else if(s[i]=='('){
               if(sum==0){
                    sum+=1;
                    
                }
                else if(sum!=0){
                    sum+=1;
                    ans+=s[i];
                }
                else if(sum!=0&&i>0){
                ans+=s[i];}
            }
            
        }
        
    return ans;}
};
