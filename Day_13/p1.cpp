// Ceil The Floor
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return {x,x};
		}
		else if(a[i]>x&&i>0){
			return {a[i-1],a[i]};
		}
		else if(a[i]>x&&i==0){
			return {-1,a[i]};
		}else if(i==n-1&&a[i]<x){
			return {a[i],-1};
		}
	}
}
