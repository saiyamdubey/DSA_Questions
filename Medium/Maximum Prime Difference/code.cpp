class Solution {
public:
    bool primehai(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>mp;
        for(int i=0;i<nums.size();i++){
            if(primehai(nums[i])){
                mp.push_back(i);
            }
        }
        int min=INT_MAX;
        int max=INT_MIN;
        cout<<mp.size()<<" ";
        if(mp.size() <= 1){
            return 0;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]>max){
                max=mp[i];
            }
            if(mp[i]<min){
                min=mp[i];
            }
        }
        return abs(max-min);
    }
};