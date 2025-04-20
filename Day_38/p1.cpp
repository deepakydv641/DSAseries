//Subsets II:https://leetcode.com/problems/subsets-ii/


class Solution {
public:
    void comb(vector<vector<int>>&v,int ind,vector<int>vt,vector<int>& nums){
        v.push_back(vt);
        for(int i=ind;i<nums.size();i++){
        if(i!=ind&&nums[i]==nums[i-1]){continue;}
        vt.push_back(nums[i]);
        comb(v,i+1,vt,nums);
        vt.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>vt;
        comb(v,0,vt,nums);
        return v;}
};

//  T(c)=O(n log n + 2^n × n)
//  S(c)=O(2^n × n)  // for storing results
