class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TLE aa gaya gandu esmai 
        // Binary search kar ya phir map kar chutiye 
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             return ans;
        //         } 
        //     }
        // }
        // return ans;
        vector<int>ans;
        int i =0;
        int j= nums.size()-1;
        while(nums[i]+nums[j]!=target){
            if(nums[i]+nums[j]>target){
                j--;
            }else if(nums[i]+nums[j]<target){
                i++;
            }
        }
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
    }
};