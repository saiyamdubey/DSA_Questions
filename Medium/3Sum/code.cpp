class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
             if(i==0||(i>0&&nums[i]!=nums[i-1])){
                cout<<i<<" : \n";
                int sum = abs(nums[i]);
                int low = i+1;
                int high = nums.size()-1;
                while(low<high){
                    int add = nums[high]+nums[low];
                    if(sum>add){
                        low++;
                    }
                    else if(sum<add){
                        high--;
                    }
                    else if(sum==add){
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]);
                        ans.push_back(v);
                        cout<<nums[i]<<" , "<<nums[low]<<" , "<<nums[high]<<"\n";
                        low++;
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};














// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         for (int i = 0; i < n - 2; i++) {
//             // Avoid duplicates
//             if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
//                 int target = -nums[i];
//                 int low = i + 1, high = n - 1;
//                 while (low < high) {
//                     int sum = nums[low] + nums[high];
//                     if (sum < target) {
//                         low++;
//                     } else if (sum > target) {
//                         high--;
//                     } else {
//                         // Found a triplet
//                         ans.push_back({nums[i], nums[low], nums[high]});
//                         // Skip duplicates
//                         while (low < high && nums[low] == nums[low + 1]) low++;
//                         while (low < high && nums[high] == nums[high - 1]) high--;
//                         low++;
//                         high--;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };





        // vector<vector<int>> ans;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(((nums[i]+nums[j]+nums[k])==0)){
        //                 vector<int>n;
        //                 n.push_back(nums[i]);
        //                 n.push_back(nums[j]);
        //                 n.push_back(nums[k]);
        //                 ans.push_back(n);
        //             }
        //         }
        //     }}
        // return ans;
        // set<int>s;
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
        // map<int,int>m;
        // set<vector<int>>ans;
        // vector<vector<int>>ans2;
        // for(auto i : s){
        //     m[i]++;
        // }
        // for(int i=0;i<s.size();i++){
        //      for(int j=i+1;j<s.size();j++){
        //         long long find = -1*(s[i] + s[j]);
        //         if(m[find]){
        //             vector<int>v;
        //             v.push_back(s[i]);
        //             v.push_back(s[j]);
        //             v.push_back(find);
        //             ans.insert(v);                    
        //         }
        //     }
        // }
        // return ans2;