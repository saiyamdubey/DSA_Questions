class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ls;
        vector<int>rs;
        vector<int>ans;
        int l=0;
        for(int i=0;i<nums.size();i++){
            ls.push_back(l);
            l=l+nums[i];
        }
        for(int i=0;i<ls.size();i++){
            cout<<ls[i]<<" ";
        }
        cout<<"\n";
        int r=0;
        for(int i=nums.size()-1;i>=0;i--){
            rs.push_back(r);
            r=r+nums[i];
        }
        reverse(rs.begin(),rs.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(ls[i]-rs[i]));
        }
        return ans;
    }
};