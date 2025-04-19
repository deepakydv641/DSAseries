//Combination Sum III: https://leetcode.com/problems/combination-sum-iii/description/

class Solution {
public:
    void comb(vector<vector<int>>&v,vector<int>&vt,int n,int k,int ind,vector<int>&nums,int sum){
        if(vt.size()==k){
            if(sum==n){
                v.push_back(vt);
            }
            return ;
        }
        if(sum>n||ind>nums.size()) return;
        vt.push_back(nums[ind]);
        sum+=nums[ind];
        comb(v,vt,n,k,ind+1,nums,sum);
        vt.pop_back();
        sum-=nums[ind];
        comb(v,vt,n,k,ind+1,nums,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>v;
        vector<int>vt;
        vector<int>nums;
        int sum=0;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        comb(v,vt,n,k,0,nums,sum);
        return v;
    }
};

