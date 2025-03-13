// Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
      
     
      return bs(nums, target, 0, nums.size() - 1);
    
    
      }
      private:
         int bs(vector<int>& nums, int target, int start, int end){
          
           while(start<=end){
            int mid=(start+end)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
           }
           return -1;
        }
};
