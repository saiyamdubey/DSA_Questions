class Solution{ 
    public:
    int maxIndexDiff(int a[], int n){ 
        vector<int>minv(n,0);
        vector<int>maxv(n,0);
        int maxnum = a[n-1];
        for(int i=n-1;i>=0;i--){
            maxnum = max(maxnum,a[i]);
            maxv[i] = maxnum;
        }
        int minnum = a[0];
        for(int i=0;i<n;i++){
            minnum = min(minnum,a[i]);
            minv[i] = minnum;
        }
        int i=0;
        int j=0;
        int ans = -1; 
        while (i<n && j<n){
            if(minv[i]<=maxv[j]){
                ans = max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};