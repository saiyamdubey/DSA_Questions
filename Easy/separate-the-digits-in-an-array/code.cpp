class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            while(nums[i]>0){
                int rem=nums[i]%10;
                temp.push_back(rem);
                nums[i]=nums[i]/10;
            }
            for(int i=temp.size()-1;i>=0;i--){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }
};