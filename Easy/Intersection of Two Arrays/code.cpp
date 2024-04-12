class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        map<int,int>m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(m[nums1[i]]){
                ans.insert(nums1[i]);
            }
        }
        vector<int>v;
        for(auto i : ans){
            v.push_back(i);
        }
        return v;
    }
};