// Good or Bad string
// https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1

class Solution {
    public:
      int isGoodorBad(string S) {
          
          int cnt=0;
          int count=0;
          int lenv=0;
          int lenc=0;
          for(int i=0;i<S.size();i++){
              if(S[i]=='a'||S[i]=='i'||S[i]=='e'||S[i]=='o'||S[i]=='u'){
                  cnt++;
                  count=0;
                  lenv=max(lenv,cnt);
              
              }else if(S[i]=='?'){
                  cnt++;
                  count++;
                  lenv=max(lenv,cnt);
                  lenc=max(lenc,count);
              }
              
              else{
                  cnt=0;
                  count++;
                  lenc=max(lenc,count);
              }
              
          }
          if(lenc>3||lenv>5){
              return 0;
          }
          else{
              return 1;
          }
      }
  };
  