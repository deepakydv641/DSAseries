// Repeated String Match
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int i=0;
        
        int n=a.size();
        int ans=0;
        while(ans*a.size()<2*b.size()){
            ans++;
        }
        int flag=0;
        for(int i=0;i<=(ans+1)*a.size()-b.size();i++){
            int j=b.size()-1+i;
            int l=0;
            flag=0;
            for(int k=i;k<=j;k++){
                if(a[k%n]!=b[l]){
                    flag=1;
                    break;
                }
                l++;
            }
            if(flag==0){
                if((j+1)%n==0){
                    return (j+1)/n;
                }
                else{
                    return (j+1)/n+1;
                }
            }
        }
    return -1;}
};

//Worst Case
//  T(c)=o(n*2)
//  S(c)=o(1)
