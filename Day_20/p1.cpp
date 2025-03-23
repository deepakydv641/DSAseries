//Sort Characters By Frequency
class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        vector<pair<int,char>>v;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto& it:mpp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string h;
      
      
       for(int i=0;i<v.size();i++){
          int z=v[i].first;
          while(z>0){
        
            h.push_back(v[i].second);
            z--;
            
        }}

    return h;}
};
