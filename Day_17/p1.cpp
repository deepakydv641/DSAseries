//Isomorphic Strings
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mpp,m;
        int i=0;
        
        
        while(i<s.size()){
            if(i==0){
                mpp[s[0]]=t[0];
                m[t[0]]=s[0];
            }
            if((mpp[s[i]]!=t[i]&&mpp[s[i]]>0)||(m[t[i]]!=s[i]&&m[t[i]]>0)){
                return false;
            }
           if(i>0){ mpp[s[i]]=t[i];
           m[t[i]]=s[i];}
            i++;
        }
    return true;}
};
