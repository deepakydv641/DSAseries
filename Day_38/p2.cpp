// Letter Combinations of a Phone Number

class Solution {
public:
     string maker(int n){
        if(n==2)return "abc";
        if(n==3)return "def";
        if(n==4)return "ghi";
        if(n==5)return "jkl";
        if(n==6)return "mno";
        if(n==7)return "pqrs";
        if(n==8)return "tuv";
        if(n==9)return "wxyz";
        if(n==1)return "";
   return ""; }
    void comb(vector<string>&ans,string &str,int ind,string digits){
        if(str.size()==digits.size()){
            ans.push_back(str);
            return ;
        }
        string st=maker(digits[ind]-'0');
        for(int i=0;i<st.size();i++){
            str.push_back(st[i]);
            comb(ans,str,ind+1,digits);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string str="";
        if(digits.size()==0){
            return ans;
        }
        string st;
        comb(ans,str,0,digits);
        return ans;
    }
};
