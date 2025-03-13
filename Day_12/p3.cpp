//Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(bs(nums,0,nums.size()-1,target)==-1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    return i;
                }
            }
            return nums.size();
        }
        else{
            return bs(nums,0,nums.size()-1,target);
        }
    return 0;}
    private: int bs(vector<int> & arr,int start,int end,int target){
        while(start<=end){
            int k;
            int mid=(start+end)/2;
            if(target==arr[mid]){
                return mid;
            }
            else if(target<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
           
        } 
       return -1; 
    }
};
