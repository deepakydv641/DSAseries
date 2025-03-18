//K-th element of two Arrays
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int i=0,j=0;
        vector<int>v;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                v.push_back(a[i]);
                i++;
            }
            else{
                v.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            v.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            v.push_back(b[j]);
            j++;
        }
    return v[k-1];}
};
