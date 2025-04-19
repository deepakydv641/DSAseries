//Subset Sums: https://www.geeksforgeeks.org/problems/subset-sums2234/1 

class Solution {
  public:
    void comb(vector<int>&v,int sum,int ind,vector<int>& arr){
        if(ind==arr.size()){
            v.push_back(sum);
            return ;
        }
        sum+=arr[ind];
        comb(v,sum,ind+1,arr);
        sum-=arr[ind];
        comb(v,sum,ind+1,arr);
    }
    vector<int> subsetSums(vector<int>& arr) {
        int sum=0;
        vector<int>v;
        int ind=0;
        comb(v,sum,0,arr);
        return v;
    }
};

//  T(c)=O(2^n)
//  S(c)=O(2^n)
