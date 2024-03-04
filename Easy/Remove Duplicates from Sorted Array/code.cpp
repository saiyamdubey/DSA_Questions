#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int i=0;
        for(auto itr=s.begin();itr!=s.end();itr++) {
            nums[i]=*itr;
            i++;
        }
        return s.size();
    }
};
int main(){
    Solution s;
    vector<int> hmm={0,0,1,1,1,2,2,3,3,4};
    int ans = s.removeDuplicates(hmm);
    cout<<ans;
    return 0;
}