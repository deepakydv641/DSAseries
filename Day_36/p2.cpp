//Combination Sum

class Solution {
public:
    void comb(vector<vector<int>>&v,vector<int>&vt,int ind,int target,int n,vector<int>&candidates){
        if(ind==n){
            if(target==0){
                v.push_back(vt);
            }
            return;
        }
    if(target>=candidates[ind]){
        vt.push_back(candidates[ind]);
        comb(v,vt,ind,target-candidates[ind],n,candidates);
        vt.pop_back();
    }
         comb(v,vt,ind+1,target,n,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>vt;
        comb(v,vt,0,target,candidates.size(),candidates);
        return v;
    }
};

// T(c)=O(2^t)
