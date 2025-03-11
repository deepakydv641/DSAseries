// Maximum Score from Subarray Minimums
class Solution {
    public:
      
      int pairWithMaxSum(vector<int> &arr) {
          int n = arr.size();
          int max_sum =0;
          for(int i=0;i<n-1;i++){
              if(arr[i]+arr[i+1]>max_sum){
                  max_sum=arr[i]+arr[i+1];
              }
          }
          return max_sum;
      }
  };

