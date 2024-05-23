class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int sum=0;
        vector<int>pre;
        vector<int>post(nums.size(),0);
        int curr1=nums[0];
        for(int i=0;i<nums.size();i++){
            if(curr1<nums[i]){
                curr1=nums[i];
            }
            pre.push_back(curr1);
        }
        int curr2=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            if(curr2>nums[i]){
                curr2=nums[i];
            }
            post[i]=curr2;
        }
        // for(auto i:pre) cout<<i<<"->";
        // cout<<"\n";
        // for(auto i:post) cout<<i<<"->";
        // cout<<"\n";
        for(int i=1;i<nums.size()-1;i++){
            // cout<<nums[i]<<"\n";
            if(nums[i]>pre[i-1] && nums[i]<post[i+1]){
                // cout<<"2";
                sum = sum+2;
            }
            else if(nums[i]>nums[i-1]&&nums[i]<nums[i+1]){
                // cout<<"1";
                sum = sum+1;
            }
        } 
        return sum;
    }
};