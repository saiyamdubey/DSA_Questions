class Solution {
public:
    int digitsum(int n){
        int ans=0;
        while(n>0){
            int rem = n%10;
            ans=ans+rem;
            n=n/10;
        }
        cout<<ans<<" ";
        return ans;
    }
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int dsum = digitsum(i);
            if(dsum%2==0){
                count++;
            }
        }
        return count;
    }
};