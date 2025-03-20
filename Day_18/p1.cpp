//Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp,mp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        if(s.size()==t.size()){for(int i=0;i<s.size();i++){
            if(mpp[s[i]]!=mp[s[i]]){
                return false;
            }
        }}
        else{
            return false;
        }
    return true;}
};
