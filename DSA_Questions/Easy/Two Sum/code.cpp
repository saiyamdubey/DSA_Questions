<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int s= nums.size();
        vector<int> v;
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<int> n = {2,7,11,15};
    vector<int> ans = s.twoSum(n,9);
    int size = ans.size();
    for(auto i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
=======
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int s= nums.size();
        vector<int> v;
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<int> n = {2,7,11,15};
    vector<int> ans = s.twoSum(n,9);
    int size = ans.size();
    for(auto i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
>>>>>>> b831a143b880d755a6f493e9f3f30f836a8fb1f5
}