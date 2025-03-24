//Sum of Beauty of All Substrings
class Solution {
public:
    int beautySum(string s) {
        
        if(s.size()<3){
            return 0;
        }
        int sum=0;
        
       
            for(int i=0;i<s.size();i++){
                int arr[26]={0};
            for(int j=i;j<s.size();j++ ){
                int maxi=INT_MIN;
                int mini=INT_MAX;
                arr[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(arr[k]>maxi){
                        maxi=arr[k];
                    }
                    if(arr[k]<mini && arr[k]>0){
                        mini=arr[k];
                    }
                }
                sum+=maxi-mini;
            }
        }
   return sum; }
};

// t(c)=o(n*2)
//s(c)=o(1)
