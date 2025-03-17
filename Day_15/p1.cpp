//Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
       return bs(v,target,0,v.size()-1); 
    }

       
public:  bool bs(vector<int>& matrix, int target,int start,int end){
                if(start<=end){
                    int mid=(start+end)/2;
                    if(matrix[mid]==target){
                        return true;
                    }
                    else if(matrix[mid]<target){
                        return bs(matrix,target,mid+1,end);
                    }
                    else{
                         return bs(matrix,target,start,mid-1);
                    }
               }
         return false;     }
        
    
};
