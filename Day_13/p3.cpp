// Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
       int target=nums[0];
         int n=nums.size();
         vector<int>v;
         for(int i=0;i<n;i++){
            v.push_back(nums[i]);
         }
       sort(nums.begin(),nums.end());
     

       int l=bs(nums,target,0,n-1);
       return v[l] ; 
    }
    private:
    int bs(vector<int>& nums,int target,int start,int end){
        while(start<=end){
           int mid=(end+start)/2;
           if(nums[mid]==target){
            if(mid==0){
                return mid;
            } 
            else if(mid==end){
                if(end+1>2){
                    return mid-1;
                }
                if(end+1<=2){
                    return mid;
                }
            }
            else{
                return mid+1;
            } }
           else if(nums[mid]>target){
            end=mid-1;
           }
           else{
            start=mid+1;
           }
       
        }
        return -1;
    }
};
