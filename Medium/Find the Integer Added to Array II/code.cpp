class Solution {
public:
    bool canMatchMinusTwo(std::vector<int>& transformed, std::vector<int>& nums2) {
        int i = 0, j = 0, skip = 2;
        while (i < transformed.size() && j < nums2.size()) {
            if (transformed[i] == nums2[j]) {
                i++;
                j++;
            } else {
                i++;
                skip--;
                if (skip < 0) {
                    return false;
                }
            }
        }
        return j == nums2.size() && (i - j) <= 2;
    }
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        // sort(n1.begin(),n1.end());        
        // sort(n2.begin(),n2.end());
        // int min=INT_MAX;
        // // for(int i=n1.size()-1;i>=0;i--){
        // //     for(int j=n2.size()-1;j>=0;j--){
        // //         if((n1[i]-n2[j])<min){
        // //             min = n1[i]-n2[j];
        // //         }
        // //     }
        // // }
        // int ans=0;
        // ans = n1[0]-n2[0];
        // if(n1[0]+ans == n2[0]){
        //     return ans*-1;
        // }
        // return ans;
        // return min;
        
        // vector<int>n3;
        // for(auto i : n1){
        //     n3.push_back(i);
        // }
        // for(auto i : n2){
        //     n3.push_back(i);
        // }
        // sort(n3.begin(),n3.end());
        // map<int,int>m;
        // for(int i=0;i<n3.size()-1;i++){
        //     m[(n3[i]-n3[i+1])]++;
        // }
        // int max = INT_MIN;
        // int maxv = 0;
        // for(auto i : m){
        //     if(i.second > max){
        //         max = i.second;
        //         maxv = i.first;
        //     }
        // }
        // sort(n1.begin(),n1.end());        
        // sort(n2.begin(),n2.end());
        // if(n1[0]+maxv != n2[0] && n1[1]+maxv != n2[1] && n1[2]+maxv != n2[2]){
        //     return maxv;
        // }
        // return maxv*-1;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        unordered_map<int, int> countX;
        int minPossibleX = INT_MAX;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                int x = nums2[j] - nums1[i];
                countX[x]++;
            }
        }

        for (auto& pair : countX) {
            int x = pair.first;
            std::vector<int> transformed(nums1.size());
            for (int i = 0; i < nums1.size(); i++) {
                transformed[i] = nums1[i] + x;
            }
            std::sort(transformed.begin(), transformed.end());

            if (canMatchMinusTwo(transformed, nums2)) {
                minPossibleX = std::min(minPossibleX, x);
            }
        }

        return minPossibleX;

    }
};