//Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        return x;
     
    }
};

//  T(C)=O(n)
// S(C)=O(1)
