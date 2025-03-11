// Sort Colors
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    int temp=0;
                         if(nums[i]>nums[j]){
                            swap(nums[i],nums[j]);
                         }
                }
                        }
                        for(int i=0;i<nums.size();i++){
                            cout<<nums[i];
                        }
        }
    };
