//Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a,b;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                a=i;
          
                flag=1;
                break;            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                b=i;
                flag=1;
            
           
                break;
            }
        }
        if(flag==0){
            a=-1;
            b=-1;
        }
         return {a, b};}
};
