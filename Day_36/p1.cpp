//Combination Sum II

class Solution {
public:
    void comb(vector<vector<int>>&v,vector<int>&vt,int ind,int n,int target,vector<int>&arr){
            if(target==0){
                v.push_back(vt);
                return;
            }
          
        int k=0;
        for(int i=ind;i<=n-1;i++){
           if(i>ind&&arr[i]==arr[i-1])continue;
           if(target<arr[i])break;
             vt.push_back(arr[i]);
            comb(v,vt,i+1,n,target-arr[i],arr);
            vt.pop_back();
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>v;
        vector<int>vt;
        comb(v,vt,0,candidates.size(),target,candidates);
        return v;
    }
};
