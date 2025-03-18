//Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    
    
    for(int i=0;i<matrix.size();i++){
       if(bs(matrix[i],target,0,matrix[i].size()-1)==1){
        return true;
       }
       
        }
    return false;}

       
public:  bool bs(vector<int>& matrix, int target,int start,int end){
                if(start<=end){
                    int mid=(start+end)/2;
                    if(matrix[mid]==target){
                        return 1;
                    }
                    else if(matrix[mid]<target){
                        return bs(matrix,target,mid+1,end);
                    }
                    else{
                         return bs(matrix,target,start,mid-1);
                    }
               }
         return 0;     }
        
    
};
