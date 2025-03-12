//Pascal Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            vector<int>k;
            for(int j=0;j<=i;j++){
                if(i==j||j==0){
                    k.push_back(1);
                }
                else{
                    k.push_back(v[i-1][j]+v[i-1][j-1]);
                }
            }
            v.push_back(k);
        }
    return v;}
};
