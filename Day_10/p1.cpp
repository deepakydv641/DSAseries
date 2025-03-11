//Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        vector<int>ve;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                v.push_back(nums[i]);
            }
            else{
                ve.push_back(nums[i]);
            }
        }
        vector<int>vec;
        for(int i=0;i<nums.size()/2;i++){
            vec.push_back(ve[i]);
            vec.push_back(v[i]);
        }
    return vec;}
};
