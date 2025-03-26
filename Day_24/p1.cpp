//Partition Labels

//approach 1
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        map<char,int>mpp;
        vector<int>v;
        int k=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==mp[s[i]]){
                mpp.erase(s[i]);
            }
            if(mpp.size()==0){
                v.push_back(i+1-k);
                k=i+1;
            }
        }
     return v; }
};

// T(c)=O(n)
//S(c)=O(1)

//brute force approach

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int arr[26]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        int hash[26]={0};
        vector<int>v;
        int k=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            int flag=1;
            for(int k=0;k<=i;k++){
                if(hash[s[k]-'a']!=arr[s[k]-'a']){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                v.push_back(i+1-k);
                k=i+1;
            }
        }
   return v; }
};

// T(c)=o(n*2)
//S(c)=o(1)
