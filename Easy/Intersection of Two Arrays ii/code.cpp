class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(m[nums1[i]]){
                m[nums1[i]]--;
                ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};